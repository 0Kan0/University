#include <iostream>
#include <algorithm>
#include <fstream>
#include "jugador.h"
#include <vector>
#define MAX 255

bool ascendente(Jugador j1, Jugador j2) //Funcion que pasaremos a sort para que ordene los jugadores por DNI en orden ascendente
{
    return j1.getDNI()<j2.getDNI();
}

bool descendente(Jugador j1, Jugador j2) //Funcion que pasaremos a sort para que ordene los jugadores por DNI en orden descendente
{
    return j1.getDNI()>j2.getDNI();
} 

std::vector<Jugador> leeJugadores(){ //Funcion que escribe los datos de un fichero en un vector de jugadores
    std::vector<Jugador> jugadores_;
    jugadores_.clear(); //Al comienzo, vaciamos el vector de jugadores
    std::ifstream f ("jugadores.txt"); //Creacion del puntero f para abrir el fichero jugadores.txt en modo lectura
    
    char dni[MAX], codigo[MAX], nombre[MAX], apellidos[MAX], direccion[MAX], localidad[MAX], provincia[MAX], pais[MAX];  //Creamos variables para almacenar temporalmente los datos del jugador
    
    while(f.getline(dni, MAX, ',')) //Vamos leyendo el fichero y guardando los valores en las variable char creadas anteriormente
    {                      
        f.getline(codigo, MAX, ',');
        f.getline(nombre, MAX, ',');
        f.getline(apellidos, MAX, ',');
        f.getline(direccion, MAX, ',');
        f.getline(localidad, MAX, ',');
        f.getline(provincia, MAX, ',');
        f.getline(pais, MAX, '\n');
        Jugador aux (dni, codigo, nombre, apellidos, 0, direccion, localidad, provincia, pais); //Creamos un jugador aux y le pasamos sus datos
        jugadores_.push_back(aux); //Pasamos aux a la lista
    }
    f.close(); //Cerramos el fichero
    return jugadores_; //Devolvemos el vector de jugadores                                                                 
} 


int main(){
    std::vector<Jugador> jugadores;
    jugadores = leeJugadores();

    std::cout<<"DNIS del vector de jugadores : "<<std::endl;
    for (int i = 0; i < (int) jugadores.size(); i++) //Imprimimos por pantalla los dni de los jugadores
    {                                                           
        std::cout<<jugadores[i].getDNI()<<std::endl;
    }
    int opcion; //Opcion para ordenar el vector de manera ascendente o descendente
    std::cout<<"Si desea ordenar el vector de forma ascendente pulse 1. De forma descendente pulse 2.";  
    std::cin>>opcion; //Introducimos la opcion
    
    switch (opcion)
    {
        case 1:
        
            std::sort(jugadores.begin(), jugadores.end(), ascendente); //Ordenamos el vector de jugadores por su DNI en orden ascendente

        break;

        case 2:

            std::sort(jugadores.begin(), jugadores.end(), descendente);  //Ordenamos el vector de jugadores por su DNI en orden descendente

        break;

        default:

            std::cout<<"Por favor, introduzca 1 o 2."<<std::endl;

        break;
    }


    std::cout<<"DNIS del vector de jugadores ordenados : "<<std::endl;
    for (int i = 0; i < (int) jugadores.size(); i++) //Imprimimos por pantalla los dni de los jugadores ya ordenados
    {                                                           
        std::cout<<jugadores[i].getDNI()<<std::endl;
    }        
    system("pause");
    return 0;                                                                                                   
}