// crupier.h
// La clase crupier representa los datos de un crupier

#ifndef CRUPIER_H
#define CRUPIER_H
#include <iostream>
#include <string>
#include "persona.h" //Incluimos persona.h para poder hacer herencia

class Crupier:public Persona //Crupier hereda la parte publica de persona
{
    private:
        std::string codigo_; //Codigo del crupier
    public:
        Crupier(std::string dni, std::string codigo, std::string nombre="\0", std::string apellidos="\0", int edad=0, std::string direccion="\0", std::string localidad="\0", std::string provincia="\0", std::string pais="\0"); //Constructor
        inline void setCodigo(std::string const &codigo){codigo_=codigo;} //Modificador del codigo
        inline std::string getCodigo()const{return codigo_;} //Observador del codigo
};

#endif