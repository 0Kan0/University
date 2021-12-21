#include <iostream>
#include <algorithm> //Biblioteca que incluye la funcion sort

bool descendente(int i, int j)
{
    return i>j;
}

int main(){
    int n; //Tamaño que tendra nuestro vector
    int v[n]; //Vector de enteros de tamaño n
    std::cout<<"Introduzca el tamano del vector: ";
    std::cin>>n; //Introducimos el tamaño del vector
    
    std::cout<<"Introduzca los elementos del vector: "<<std::endl;                        
    for(int i=0; i<n; i++) //Introducimos los elementos del vector
    {                                                                                               
        std::cin>>v[i];
    }
    
    int opcion; //Opcion para ordenar el vector de manera ascendente o descendente
    std::cout<<"Si desea ordenar el vector de forma ascendente pulse 1. De forma descendente pulse 2.";  
    std::cin>>opcion;  //Introducimos la opcion

    switch(opcion)
    {
    
        case 1:
            std::sort(v, v+n); //Ordenamos los elementos del vector con la funcion sort de forma ascendente

            std::cout<<"El vector ordenado ascendente es: |";
            for(int i=0; i<n; i++) //Mostramos el vector ordenado ascendente por pantalla
            {                                
                std::cout<<v[i]<<"|";
            }
            std::cout<<std::endl;
        break;
        

        case 2:
            std::sort(v, v+n, descendente);//Ordenamos los elementos del vector con la funcion sort de forma descendente

            std::cout<<"El vector ordenado descendente es: |";
            for(int i=0; i<n; i++)//Mostramos el vector ordenado descendente por pantalla
            {                                 
                std::cout<<v[i]<<"|";
            }
            std::cout<<std::endl;
        break;

        default:

            std::cout<<"Por favor, introduzca 1 o 2."<<std::endl;

        break;
    }

    std::cout<<"Fin del programa"<<std::endl;
    system("pause");

    return 0;//Salimos del programa
}