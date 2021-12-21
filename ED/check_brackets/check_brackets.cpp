#include <exception>
#include <iostream>
#include <fstream>
#include <string>
#include "check_brackets.hpp"
#include "stack.hpp"

class Bracket
{
public:
    Bracket()
        : ch(0), position(0)
    {
    }
    Bracket(char c, size_t pos)
        : ch(c), position(pos)
    {
    }

    bool match_with(char o) const
    {
        return ((ch == '{' && o == '}') || (ch == '[' && o == ']') || (ch == '(' && o == ')'));
    }
    size_t pos() const
    {
        return position;
    }
    bool operator==(Bracket const &other) const
    {
        return ch == other.ch && position == other.position;
    }

protected:
    char ch;
    size_t position;
};

size_t
check_brackets(std::istream &input)
{
    size_t pos = 0;
    bool unbalanced_found = false;
    auto stack = Stack<Bracket>::create();
    char nextch;
    while (input && !unbalanced_found)
    {
        ++pos;
        input >> nextch;
        if (input)
        {
            if (nextch == '(' || nextch == '{' || nextch == '[')
            {
                stack->push(Bracket(nextch, pos));
            }
            else if (nextch == ')' || nextch == '}' || nextch == ']')
            {
                if (stack->is_empty() || !stack->top().match_with(nextch))
                {
                    stack->push(Bracket(nextch, pos));
                    unbalanced_found = true;
                }

                else
                {
                    stack->pop();
                }
            }
        }
    }

    size_t ret_val = 0;

    if (unbalanced_found)
    {
        ret_val = pos;
    }

    else if (!stack->is_empty())
    {
        ret_val = stack->top().pos();
    }

    return ret_val;
}