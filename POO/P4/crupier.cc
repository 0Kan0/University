#include "crupier.h"

Crupier::Crupier(std::string dni, std::string codigo, std::string nombre, std::string apellidos, int edad, std::string direccion, std::string localidad, std::string provincia, std::string pais):Persona(dni, nombre, apellidos,edad, direccion, localidad, provincia, pais)
{
    setCodigo(codigo); //Incluimos codigo como parametro obligatorio.
};