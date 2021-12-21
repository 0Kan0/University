#ifndef RULETA_H
#define RULETA_H
#include "crupier.h" //Incluimos jugador.h para declarar objetos de la clase crupier
#include "jugador.h" //Incluimos jugador.h para declarar objetos de la clase jugador
#include <string>
#include <fstream>
#include <time.h>

class Ruleta
{
    private:
    int banca_, bola_; //Dinero de la banca  valor de la bola 
    Crupier crupier_; //Objeto de la clase crupier
    std::list <Jugador> jugadores_; //Lista de jugadores


    public:
    Ruleta(Crupier crupier):crupier_(crupier) //Constructor
    {
        srand(time(NULL)); //Para generar numeros aleatorios
        banca_=1000000; //Ponemos la banca en 1000000
        bola_=-1; //Ponemos la banca en -1
    }
    
    inline bool setBanca(int const &banca){if(banca<0){return false;}banca_=banca; return true;} //Modificador de la banca. Si la banca es menor que 0, devuelve false. En caso contrario, true.
    inline int getBanca() const {return banca_;};//Observador de la banca
    inline bool setBola(int bola, int *nLazamientosBola_); //Modificador de la bola. Si la bola es mayor a 36 o menor a 0, devuelve false. En caso contrario, true.
    inline int getBola() const{return bola_;}; //Observador de la bola
    inline void setCrupier(Crupier const &crupier){crupier_=crupier;}; //Modificador del crupier
    inline Crupier getCrupier() const{return crupier_;}; //Observador del crupier
    inline std::list<Jugador> getJugadores() const{return jugadores_;}; //Observador de la lista jugadores
    bool addJugador(Jugador jugador); //Añade un jugador a la lista
    int deleteJugador(std::string DNI); //Borra un jugador de la lista
    int deleteJugador(Jugador jugador); //Borra un jugador de la lista
    void escribeJugadores(); //Añade jugadores a la lista
    void leeJugadores(); //Lee los jugadores de la lista
    inline void giraRuleta(){bola_=(rand()%37);}; //Pone la bola con un numero entre 0 y 36
    void getPremios(); //En funcion del numero de la bola, ganancias y perdidas de la banca y los jugadores
    bool esRoja(int const &valor); //Funcion que determina si la bola es roja o no
    bool esPar(int const &valor); //Funcion que determina si la bola es par o no
    bool esAlta(int const &valor); //Funcion que determina si la bola es un valor alto o no
};

#endif

