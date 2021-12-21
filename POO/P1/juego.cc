//juego.cc
//Programa principal prueba funcionamiento de la clase Dados

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "dados.h"
#define NULL __null

int main()
{
    Dados d; 
    int n;

    std::cin>>n;

    d.lanzamiento();
    std::cout << "dado 1 = " << d.getDado1() << "\n";
    std::cout << "dado 2 = " << d.getDado2() << "\n";
    std::cout << "suma de los dados = " << d.getSuma() << "\n";
    std::cout << "resta de los dados = " << d.getDiferencia() << "\n";
    std::cout << d.setDado1(n) << "\n";
    std::cout << d.setDado2(n) << "\n";
    std::cout << d.getLanzamientos1() << "\n";
    std::cout << d.getLanzamientos2() << "\n";

    system("pause");
}