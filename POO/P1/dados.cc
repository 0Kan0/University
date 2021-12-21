//dados.cc
//Cuerpo de los métodos de la clase Dados

#include <cstdlib>
#include <ctime>
#include "dados.h"
#define NULL __null

Dados::Dados()
{
    srand(time(NULL));
    d1_=1;
    d2_=1;
    cont_d1_=0;
    cont_d2_=0;
    med_d1_=0;
    med_d2_=0;
    cont_ultimos1=1;
    cont_ultimos2=1;
    ultimos_d1_[0]=d1_;
    ultimos_d2_[0]=d2_;
    for (int i=1; i<5; i++)
    {
        ultimos_d1_[i]=0;
        ultimos_d1_[i]=0;
    }

}

void Dados::lanzamiento()
{
    d1_=(rand()%6)+1;
    d2_=(rand()%6)+1;
    cont_d1_++;
    cont_d2_++;
}

int Dados::getDado1()
{
    return d1_;
}

int Dados::getDado2()
{
    return d2_;
}

int Dados::getSuma()
{
    return d1_+d2_;
}

int Dados::getDiferencia()
{
    return d1_-d2_;
}

bool Dados::setDado1(int n)
{
    if ((n>=1) && (n<=6))
    {
        d1_=n;
        cont_d1_++;
        med_d1_*=d1_;
        return true;
    }

    return false;
}

bool Dados::setDado2(int n)
{
    if ((n>=1) && (n<=6))
    {
        d2_=n;
        cont_d2_++;
        med_d2_*=d2_;
        return true;
    }

    return false;
}

int Dados::getLanzamientos1()
{
    return cont_d1_;
}

int Dados::getLanzamientos1()
{
    return cont_d2_;
}

float Dados::getMedia1()
{
    if(cont_d1_==0)
    {
        return 0;
    }
    
    return med_d1_/cont_d1_;
}

float Dados::getMedia2()
{
    if(cont_d2_==0)
    {
        return 0;
    }
    
    return med_d2_/cont_d2_;
}

void Dados::getUltimos1(int * ultimos)
{
    for (int i=0; i<5; i++)
    {
        ultimos[i]=ultimos_d1_[i];
    }
}

void Dados::getUltimos2(int * ultimos)
{
    for (int i=0; i<5; i++)
    {
        ultimos[i]=ultimos_d2_[i];
    }
}