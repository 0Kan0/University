#include "jugador.h"
#include <fstream>
#define MAX 255

Jugador::Jugador(std::string dni, std::string codigo, std::string nombre, std::string apellidos, int edad, std::string direccion, std::string localidad, std::string provincia, std::string pais)
:Persona(dni, nombre, apellidos,edad, direccion, localidad, provincia, pais)
{
    setCodigo(codigo); //Incluimos codigo como parametro obligatorio.
    dinero_=1000; //Ajustamos el dinero a 1000
};

void Jugador::setApuestas()
{
    apuestas_.clear(); //Limpiamos la lista de apuestas
    std::string filename=getDNI()+".txt"; //Se crea el fichero que tendra de nombre el "DNI de la persona.txt"
    std::fstream f;
    f.open(filename, std::fstream::in); //Abrimos el fichero 
    if (f.is_open()){
        char tipo[MAX], valor[MAX], cantidad[MAX]; //Ponemos como valor maximo a estas variables 255
        while (f.getline(tipo, MAX, ','))
        {   
            f.getline(valor, MAX, ','); //Leemos hasta la proxima coma
            f.getline(cantidad, MAX, '\n'); //Leemos hasta el proximo \n
            Apuesta a={atoi(tipo), atoi(cantidad), valor}; //Añadimos a la estructura el codigo, valor y cantidad
            apuestas_.push_back(a); //Añadimos la apuesta a la lista de apuestas
        }
    }
}