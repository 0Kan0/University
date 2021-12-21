#include "contador.h"
#include <iostream>

Contador::Contador(int valor, int min, int max)
{
  if (valor<min || valor>max || min>max)
  {
    valor = 0;
    min = 0;
    max = 1000;
  }
  valor_ = valor;
  min_ = min;
  max_ = max;
  history_.push_back(*this);
}

void Contador::controlValor()
{
    if (valor_>max_)
    {
        valor_=max_;
    }

    else if (valor_<min_)
    {
        valor_=min_;
    }

    history_.push_back(*this);
}

Contador Contador::operator=(const int &n)
{
    this->valor_= n;
    controlValor();
    return *this;
}

Contador Contador::operator=(const Contador &contador)
{
    this->valor_ = contador.valor_;
    this->min_ = contador.min_;
    this->max_ = contador.max_;
    this->history_ = contador.history_;
    history_.push_back(*this);
    return *this;
}

Contador Contador::operator++(void)
{   
    ++this->valor_;
    controlValor();
    return *this;
}

Contador Contador::operator++(int)
{
    Contador aux = *this;
    ++this->valor_;
    controlValor();
    return aux;
}

Contador Contador::operator--(void)
{
    --this->valor_;
    controlValor();
    return *this;
}

Contador Contador::operator--(int)
{
    Contador aux = *this;
    --this->valor_;
    controlValor();
    return aux;
}

Contador Contador::operator+(const int &n)
{
    this->valor_ += n;
    controlValor();
    return *this;
}

Contador operator+(const int &n, const Contador &contador)
{
    Contador aux;
    aux.valor_ = n + contador.valor_;
    aux.max_ = contador.max_;
    aux.min_ = contador.min_;
    aux.controlValor();
    return aux;
}

Contador Contador::operator-(const int &n)
{
    this->valor_ -= n;
    controlValor();
    return *this;
}

Contador operator-(const int &n, const Contador &contador)
{
    Contador aux;
    aux.valor_ = n - contador.valor_;
    aux.max_ = contador.max_;
    aux.min_ = contador.min_;
    aux.controlValor();
    return aux;
}

bool Contador::undo(int const &n)
{
    if (n >= (int) history_.size() || n<1)
    {
        return false;
    }

    for (int i = 0; i < n; i++)
    {
        history_.pop_back();
    } 

    *this = history_.back();
    return true;
}