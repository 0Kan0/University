// jugador.h
// La clase jugador representa los datos de un jugador

#ifndef JUGADOR_H
#define JUGADOR_H
#include <iostream>
#include <string>
#include <list>
#include <fstream>
#include "persona.h" //Incluimos persona.h para poder hacer herencia


struct Apuesta //Estructura de apuesta
{
    int tipo, cantidad; //Tipo y cantidad de apuesta
    std::string valor; //Apuesta realizada
};

class Jugador:public Persona //Jugador hereda la parte publica de persona
{
    private:
        std::string codigo_; //Codigo del jugador
        int dinero_; //Dinero del jugador
        std::list <Apuesta> apuestas_; //Lista de tipo apuesta
        
        
    public:
        Jugador(std::string dni, std::string codigo, std::string nombre="\0", std::string apellidos="\0", int edad=0, std::string direccion="\0", std::string localidad="\0", std::string provincia="\0", std::string pais="\0"); //Constructor
        inline void setCodigo(std::string const &codigo){codigo_=codigo;} //Modificador del codigo
        inline std::string getCodigo() const{return codigo_;} //Observador del codigo
        inline void setDinero(int const &dinero){dinero_=dinero;} //Modificador del dinero
        inline int getDinero() const{return dinero_;} //Observador del dinero
        inline std::list <Apuesta> getApuestas() const{return apuestas_;} //Observador de las apuestas
        void setApuestas();
};

#endif