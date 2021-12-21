#include <cassert>
#include "trie.hpp"

#ifdef assert
//We undefined this macro to not shadow our implementation of assert.
#undef assert
#endif

/**
 * @brief Check an assertion.
 * In Debug mode, if the assertion is not met, a segfault is generated.
 * @param assertion
 */
inline void assert(bool assertion)
{
#ifndef NDEBUG
    (void)((assertion) || (__assert ("Assert violation!", __FILE__, __LINE__),0));
#endif
}


TrieNode::TrieNode ()
{
    //TODO
    //Hint: Do you need to do something?
};

TrieNode::Ref TrieNode::create()
{
    return std::make_shared<TrieNode>();
}

bool TrieNode::has(char k) const
{
    bool ret_v = false;
    //TODO
    for (auto item=children_.begin(); item!=children_.end(); item++)
    {
        if (item->first == k)
        {
            ret_v=true;
        }
    }
    //
    return ret_v;
}

TrieNode::Ref
TrieNode::child(char k) const
{
    assert(has(k));
    TrieNode::Ref ret_v;
    //TODO
    auto temp=children_;
    ret_v=temp[k];
    //
    return ret_v;
}

std::string const&
TrieNode::value() const
{
    return value_;
}

const std::map<char, TrieNode::Ref> &TrieNode::children() const
{
    return children_;
}

void
TrieNode::set_value(std::string const& new_v)
{
    value_ = new_v;
}

void
TrieNode::insert(char k, Ref node)
{
    //TODO
    children_.insert(std::make_pair(k, node));
    //
}

Trie::Trie()
{
    //TODO
    //Hint: Do you need to do something?
}

Trie::Ref Trie::create()
{
    return std::make_shared<Trie>();
}

TrieNode::Ref Trie::root() const
{
    //TODO
    return root_;
    //
}

bool
Trie::has(std::string const& k) const
{
    bool found = false;
    //TODO
    //Remember: The Trie can have a prefix==k but does not store the key k.
    if (root_!=nullptr)
    {
        auto node_temp=find_node(k);
        found=(node_temp!=nullptr) && (node_temp->value().size()==k.size());
    }
    //
    return found;
}

std::vector<std::string>
Trie::keys(std::string const& pref) const
{
    std::vector<std::string> keys;
    //TODO
    auto node=find_node(pref);
    if (node!=nullptr)
    {
        preorder_traversal(node, keys);
    }
    //
    return keys;
}


void Trie::insert(std::string const& k)
{
    //TODO
    if (root_==nullptr)
    {
        root_=std::make_shared<TrieNode>(TrieNode());
    }

    TrieNode::Ref node=root_;
    for (size_t j=0; j<k.size(); j++)
    {
        if (node->has(k[j]))
        {
            node=node->child(k[j]);
        }

        else
        {
            auto new_Node=std::make_shared<TrieNode>(TrieNode());
            node->insert(k[j], new_Node);
            node=new_Node;
        }
    }

    node->set_value(k);
    //
    assert(has(k));
}

TrieNode::Ref
Trie::find_node(std::string const& pref) const
{
    TrieNode::Ref node;
    //TODO
    node=root_;
    for (size_t j=0; j<=pref.length() && node->has(pref[j]); j++)
    {
        node=node->child(pref[j]);
    }
    //
    return node;
}

void
Trie::preorder_traversal(TrieNode::Ref const& node,
                         std::vector<std::string> & keys) const
{
    //TODO
    if (node->value()!="")
    {
        keys.push_back(node->value());
    }

    for (auto item=node->children().begin(); item!=node->children().end(); item++)
    {
        preorder_traversal(item->second, keys);
    }
    //
}
