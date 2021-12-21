#include "persona.h"

Persona::Persona(std::string dni, std::string nombre, std::string apellidos, int edad, std::string direccion, std::string localidad, std::string provincia, std::string pais)
{
    setDNI(dni);
    setNombre(nombre);
    setApellidos(apellidos);
    setEdad(edad);
    setDireccion(direccion);
    setLocalidad(localidad);
    setProvincia(provincia);
    setPais(pais);
}