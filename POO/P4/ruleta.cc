#include "ruleta.h"
#include <string>
#include <iostream>
#define MAX 255

// Funcion addJugador : Esta recibe un 'jugador', compara con la lista 'jugadores' de la partida (ruleta) actual, 
// añadiendolo en caso de no existir. Devolvera true si fue añadido con exito y false si ya existia en la lista.

bool Ruleta::addJugador(Jugador jugador)
{
    
    for (std::list<Jugador>::iterator i=jugadores_.begin(); i!=jugadores_.end(); i++)
    {
        if (i->getDNI()==jugador.getDNI())
        {
            return false;
        }
    } 
    std::fstream f;
    f.open(jugador.getDNI()+".txt", std::fstream::out);
    if(!f.is_open())
    {
        return false;
    }
    f.close();
    jugadores_.push_back(jugador);
    return true;   
}

// Funcion deleteJugador : Recibe el dni de un 'jugador', busca en la lista de 'jugadores' y devuelve -1 si la lista esta vacia,
// 1 si el jugador aparecia en la lista (ademas de borrarlo), y -2 si la lista no esta vacia pero no encuentra al jugador en esta.

int Ruleta::deleteJugador(std::string DNI)
{   
    if (jugadores_.size()==0)
    {
        return -1;
    }

    std::list<Jugador> aux;
    for (std::list<Jugador>::iterator i=jugadores_.begin(); i!=jugadores_.end(); i++)
    {
        if (DNI!=i->getDNI())
        {
            aux.push_back(*i);
        }
    }

    if (aux.size()!=jugadores_.size())
    {
        jugadores_=aux;
        return 1;
    }

    else
    {
        return -2;
    }
}

// Funcion deleteJugador : Recibe un 'jugador', busca en la lista de 'jugadores' y devuelve -1 si la lista esta vacia,
// 1 si el jugador aparecia en la lista (ademas de borrarlo), y -2 si la lista no esta vacia pero no encuentra al jugador en esta.

int Ruleta::deleteJugador(Jugador jugador)
{
    if (jugadores_.size()==0)
    {
        return -1;
    }

    std::list<Jugador> aux;
    for (std::list<Jugador>::iterator i=jugadores_.begin(); i!=jugadores_.end(); i++)
    {
        if (jugador.getDNI()!=i->getDNI())
        {
            aux.push_back(*i);
        }
    }
    
    if (aux.size()!=jugadores_.size())
    {
        jugadores_=aux;
        return 1;
    }

    else
    {
        return -2;
    }
}

// Funcion escribeJugadores : Abre el fichero "jugadores.txt" y escribe todos los atributos de dicho jugador (tanto los de jugador
// como los de persona).

void Ruleta::escribeJugadores()
{   
    std::fstream f;
    f.open("jugadores.txt", std::fstream::out);
    if(f.is_open())
    {
        for (std::list<Jugador>::iterator i=jugadores_.begin(); i!=jugadores_.end(); i++)
        {
            f<<i->getDNI()<<','<<i->getCodigo()<<','<<i->getNombre()<<','<<i->getApellidos()<<','<<i->getDireccion()<<','<<
            i->getLocalidad()<<','<<i->getProvincia()<<','<<i->getPais()<<','<<i->getDinero()<<'\n';
        }
    }
}

// Funcion lee Jugadores : Abre el archivo "jugadores.txt" de la ruleta (partida) actual e imprime los jugadores con sus atributos.

void Ruleta::leeJugadores()
{
  std::ifstream f("jugadores.txt"); 
  jugadores_.clear();
  Jugador jugador("a","a");
  std::string cad;
  getline(f, cad,',');
  while (!f.eof()) 
  {
    jugador.setDNI(cad);
    getline(f, cad,',');
    jugador.setCodigo(cad);
    getline(f, cad,',');
    jugador.setNombre(cad);
    getline(f, cad,',');
    jugador.setApellidos(cad);
    getline(f, cad,',');
    jugador.setDireccion(cad);
    getline(f, cad,',');
    jugador.setLocalidad(cad);
    getline(f, cad,',');
    jugador.setProvincia(cad);
    getline(f, cad,',');
    jugador.setPais(cad);
    getline(f, cad,'\n');
    jugador.setDinero(std::stoi(cad));
    jugadores_.push_back(jugador);
    getline(f, cad,',');
  }
  f.close();
}

//Funcion getPremios : Dependiendo del tipo de apuesta, esta hara que la banca pierda o gane dinero, y que el jugador
//pierda o gane dinero.

void Ruleta::getPremios()
{   
    for (std::list<Jugador>::iterator i=jugadores_.begin(); i!=jugadores_.end(); i++)
    {
        i->setApuestas();
        std::list<Apuesta> aux=i->getApuestas();
        for (std::list<Apuesta>::iterator j=aux.begin(); j!=aux.end(); j++)
        {   
            switch(j->tipo)
            {
                case 1:

                    if (stoi(j->valor)==getBola())
                    {
                        i->setDinero(i->getDinero()+j->cantidad*35);
                        setBanca(getBanca()-j->cantidad*35);
                    }  
                    
                    else
                    {
                    i->setDinero((i->getDinero()-j->cantidad));
                    setBanca(getBanca()+j->cantidad);
                    }
                break;

                case 2:

                    if (getBola()==0)
                    {                                                                                        
                        setBanca(getBanca() + j->cantidad);
                        i->setDinero(i->getDinero() - j->cantidad);
                    }

                    else if ((j->valor=="rojo" && esRoja(bola_)) || (j->valor=="negro" && !esRoja(bola_)))
                    {
                        i->setDinero((i->getDinero()+j->cantidad));
                        setBanca(getBanca()-j->cantidad);
                    }

                    else 
                    {
                        i->setDinero((i->getDinero()-j->cantidad));
                        setBanca(getBanca()+j->cantidad);
                    }
                break;

                case 3:

                    if (getBola()==0)
                    {                                                                                        
                        setBanca(getBanca()+j->cantidad);
                        i->setDinero(i->getDinero()-j->cantidad);
                    }

                    else if ((j->valor=="par" && esPar(bola_)) || (j->valor=="impar" && !esPar(bola_)))
                    {
                        i->setDinero((i->getDinero()+j->cantidad));
                        setBanca(getBanca()-j->cantidad);
                    }

                    else
                    {
                        i->setDinero((i->getDinero()-j->cantidad));
                        setBanca(getBanca()+j->cantidad);
                    }

                break;

                case 4:

                    if (getBola()==0)
                    {                                                                                        
                        setBanca(getBanca()+j->cantidad);
                        i->setDinero(i->getDinero()-j->cantidad);
                    }

                    else if ((j->valor=="alto" && esAlta(bola_)) || (j->valor=="bajo" && !esAlta(bola_))) 
                    {
                        i->setDinero((i->getDinero()+j->cantidad));
                        setBanca(getBanca()-j->cantidad);
                    }

                    else 
                    {
                        i->setDinero((i->getDinero()-j->cantidad));
                        setBanca(getBanca()+j->cantidad);
                    }
                break;
            }
        }
    }
}

//Funcion esRoja : Funcion que determina si la bola es roja o no, devolviendo true si es cierto, false en caso contrario

bool Ruleta::esRoja(int const &valor)
{      
    int rojos[18] = {1,3,5,7,9,12,14,18,19,21,23,25,27,30,32,34,36};
        for(int i=0; i<18; i++){
            if(valor == rojos[i]){
                return true;                
            }
        }
    return false;  
}   

//Funcion esPar : Funcion que determina si la bola es par o no, devolviendo true si es cierto, false en caso contrario


bool Ruleta::esPar(int const &valor)
{
    if (valor%2==0)
    {
        return true;
    }
    return false;
}

//Funcion esAlta : Funcion que determina si la bola es roja o no, devolviendo true si es cierto, false en caso contrario


bool Ruleta::esAlta(int const &valor)
{
    if (valor>=1 && valor<=18)
    {
        return false;
    }
    return true;
}

void Ruleta::getEstadoRuleta(int &njugadores, int &dineroMesa, int &nLanzamientosBola, int &beneficioBanca)
{
  njugadores = jugadores_.size();
  dineroMesa = banca_;
  std::list<Jugador>::iterator j;
  j =jugadores_.begin();
  for (int i=0; i<jugadores_.size(); i++)
  {
    dineroMesa += j->getDinero();
  }
  nLanzamientosBola=nLanzamientosBola_;
}

//Funcion setBola : Contador de nLanzamientos y si la bola es bola>=0 && bola<=36, devuelve true. En caso contrario,

bool Ruleta::setBola(int bola, int * nLanzamientosBola_)
{
    if (bola>=0 && bola<=36) 
    {
        * nLanzamientosBola_ ++;
        bola_ = bola;
        return true;
    }

    return false;
}