// persona.h
// La clase persona representa los datos de una persona

#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include <string>

class Persona
{
    private:
        int edad_; //Edad de la persona
        std::string dni_, nombre_, apellidos_, direccion_, localidad_, provincia_, pais_;
    public:
        Persona(std::string dni, std::string nombre="\0", std::string apellidos="\0", int edad=0, std::string direccion="\0", std::string localidad="\0", std::string provincia="\0", std::string="\0"); //Constructor. Pasa DNI como parametro obligatorio y el resto como opcionales
        inline bool setEdad(int const &edad){if(edad>=0){edad_=edad;return true;}return false;}; //Modificador de la edad. Si no es mayor de 0, devuelve false. En caso contrario, true
        inline int getEdad() const{return edad_;}; //Observador de la edad
        inline void setDNI(std::string dni){dni_=dni;}; //Modificador del DNI
        inline std::string getDNI() const{return dni_;}; //Observador del DNI
        inline void setNombre(std::string nombre){nombre_=nombre;}; //Modificador del nombre
        inline std::string getNombre() const{return nombre_;}; //Observador del nombre
        inline void setApellidos(std::string apellidos){apellidos_=apellidos;}; //Modificador delos apellidos
        inline std::string getApellidos() const{return apellidos_;}; //Observador de los apellidos
        inline void setDireccion(std::string direccion){direccion_=direccion;}; //Modificador de la direccion
        inline std::string getDireccion() const{return direccion_;}; //Observador de la direccion
        inline void setLocalidad(std::string localidad){localidad_=localidad;}; //Modificador de la localidad
        inline std::string getLocalidad() const{return localidad_;}; //Observador de la localidad
        inline void setProvincia(std::string provincia){provincia_=provincia;}; //Modificador de la provincia
        inline std::string getProvincia() const{return provincia_;}; //Observador de la provincia
        inline void setPais(std::string pais){pais_=pais;}; //Modificador del pais
        inline std::string getPais() const{return pais_;}; //Observador del pais
        inline std::string getApellidosyNombre() const{return apellidos_+", "+nombre_;}; //Observador de los apellidos y nombre. Los devuelve concatenados.
        inline bool mayor(){if(edad_>=18){return true;}return false;}; //Comprueba si es mayor de edad. Si no es mayor de 18, devuelve false. En caso contrario, true
};

#endif