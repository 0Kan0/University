#include "ruleta.h"
#include "jugador.h"
#include "crupier.h"
#include <iostream>
#include <vector>


int main()
{
    int opcion; 
    bool loop=true; 
    std::list<Jugador> jugadores; //Creamos una lista auxiliar de jugadores
    std::vector<int> gananciaJugadores(jugadores.size());//Creamos un vector de enteros que almacenará el beneficio individual de cada jugador
    Jugador jugador("aux","aux");//Creamos un jugador auxiliar para ir añadiendo los datos y hacer el push


    system("clear");
    std::cout<<"Datos del crupier:\n";

    Crupier crupier("aux","aux");//Creamos un crupier para ir añadiendo los datos
    std::string cad;//Creamos una cad para almacenar las lecturas de getline
    std::cout<<"Introduzca el DNI del crupier: \n";
    getline(std::cin, cad,'\n');//Leemos el dni del crupier
    crupier.setDNI(cad);//Guardamos el dni en la estructura auxiliar
    std::cout<<"Introduzca el codigo del crupier: \n";
    getline(std::cin, cad,'\n');//Leemos el código
    crupier.setCodigo(cad);//Guardamos el código en la estructura auxiliar
    std::cout<<"Introduzca el nombre del crupier: \n";
    getline(std::cin, cad,'\n');//Leemos el nombre
    crupier.setNombre(cad);//Guardamos el nombre en la estructura auxiliar
    std::cout<<"Introduzca los apellidos del crupier: \n";
    getline(std::cin, cad,'\n');//Leemos los apellidos
    crupier.setApellidos(cad);//Guardamos los apellidos en la estructura auxiliar
    std::cout<<"Introduzca la edad del crupier: \n";
    getline(std::cin, cad,'\n');//Leemos la edad
    crupier.setEdad(std::stoi(cad));//Guardamos la edad en la estructura auxiliar
    std::cout<<"Introduzca la dirección del crupier: \n";
    getline(std::cin, cad,'\n');//Leemos la dirección
    crupier.setDireccion(cad);//Guardamos la dirección en la estructura auxiliar
    std::cout<<"Introduzca la localidad del crupier: \n";
    getline(std::cin, cad,'\n');//Leemos la localidad
    crupier.setLocalidad(cad);//Guardamos la localidad en la estructura auxiliar
    std::cout<<"Introduzca la provincia del crupier: \n";
    getline(std::cin, cad,'\n');//Leemos la provincia
    crupier.setProvincia(cad);//Guardamos la provincia en la estructura auxiliar
    std::cout<<"Introduzca el pais del crupier: \n";
    getline(std::cin, cad,'\n');//Leemos el pais
    crupier.setPais(cad);//Guardamos el pais en la estructura auxiliar
    Ruleta r(crupier);

    
    
    while(loop=true)
    
    std::cout<<"Pulsa 0 para salir del programa\n";
    std::cout<<"Pulsa 1 para cargar los jugadores del fichero jugadores.txt\n";
    std::cout<<"Pulsa 2 para guardar los jugadores en jugadores.txt|\n";
    std::cout<<"Pulsa 3 para ver el estado de la ruleta, el dinero de la banca y el de los jugadores\n";
    std::cout<<"Pulsa 4 para hacer girar la ruleta\n";
    std::cout<<"Pulsa 5 para eliminar un jugador de la mesa\n";
    std::cout<<"Pulsa 6 para añadir un jugador a la mesa\n";
    std::cin>>opcion;
    {

        switch (opcion)
        {
            case 0:
                exit;
                loop=false;
                
            break;

            case 1:
                system("clear");
                r.leeJugadores();
                std::cout<<"La lectura se completó\n";
                loop=true;

            break;
        
            case 2:
                system("clear");
                r.escribeJugadores();
                std::cout<<"La escritura se completó\n";
                loop=true;

            break;
        
            case 3:
                system("clear");
                int njugadores, dineroMesa, nLanzamientosBola, gananciaBanca;
                r.getEstadoRuleta(njugadores, dineroMesa, nLanzamientosBola, gananciaBanca);
                std::cout<<"En la mesa hay: "<<njugadores<<" jugadores\n";
                std::cout<<"En la mesa hay: "<<dineroMesa<<"€\n";
                std::cout<<"La bola ha sido lanzada: "<<nLanzamientosBola<<" veces\n";
                std::cout<<"La ganancia de la banca en esta mesa es de: "<<gananciaBanca<<"€\n";
                std::cout<<"La bola ha caido en: "<<r.getBola()<<"\n";
                std::cout<<"La banca posee: "<<r.getBanca()<<"\n";
                
                jugadores=r.getJugadores();

                for (std::list<Jugador>::iterator i=jugadores.begin(); i!=jugadores.end(); i++)
                {
                    std::cout<<"El jugador con DNI: "<<i->getDNI()<<" posee: "<<i->getDinero()<<"\n";
                }

                loop=true;

            break;
        
            case 4:
        
                system("clear");
                int gananciaBanca=r.getBanca();
                
                jugadores=r.getJugadores();
            
                std::list<Jugador>::iterator j;
                j=jugadores.begin();

                for (int i=0; i<jugadores.size(); i++)
                {
                    gananciaJugadores[i]=j->getDinero();
                    j++;
                }

                r.giraRuleta();
                std::cout<<"La bola ha caido en la posición: "<<r.getBola()<<"\n";
                r.getPremios();
                gananciaBanca=r.getBanca()-gananciaBanca;
                std::cout<<"El beneficio de la banca ha sido: "<<gananciaBanca<<"\n";
                jugadores=r.getJugadores();
                j=jugadores.begin();
                
                for (int i=0; i<jugadores.size(); i++)
                {
                    gananciaJugadores[i]=j->getDinero()-gananciaJugadores[i];
                    std::cout<<"El beneficio del jugador: "<<j->getDNI()<<" ha sido de: "<<gananciaJugadores[i]<<"€\n";
                    j++;
                }

                loop=true;

            break;
        
            case 5:
            
                system("clear");
                std::cout<<"Introduce el DNI: del jugador que deseas eliminar: ";
                getline(std::cin, cad,'\n');

                if (r.deleteJugador(cad)==1)
                {
                std::cout<<"El borrado se completó satisfactoriamente\n";
                }

                else if (r.deleteJugador(cad)==-1)
                {
                    std::cout<<"Error, no se pudo borrar porque la lista de jugadores está vacía\n";
                }

                else if (r.deleteJugador(cad)==-2)
                {
                    std::cout<<"Error, no se pudo borrar porque el jugador no se encuentra en el sistema\n";
                }

                loop=true;

            break;
            
            case 6:
            
                system("clear");

                std::cout<<"Datos del jugador:\n";

                std::cout<<"\nIntroduzca el DNI del juagador: ";
                getline(std::cin, cad,'\n');
                jugador.setDNI(cad);
                std::cout<<"\nIntroduzca el codigo del juagador: ";
                getline(std::cin, cad,'\n');
                jugador.setCodigo(cad);
                std::cout<<"\nIntroduzca el nombre del juagador: ";
                getline(std::cin, cad,'\n');
                jugador.setNombre(cad);
                std::cout<<"\nIntroduzca los apellidos del juagador: ";
                getline(std::cin, cad,'\n');
                jugador.setApellidos(cad);
                std::cout<<"\nIntroduzca la edad del juagador: ";
                getline(std::cin, cad,'\n');
                jugador.setEdad(std::stoi(cad));
                std::cout<<"\nIntroduzca la dirección del juagador: ";
                getline(std::cin, cad,'\n');
                jugador.setDireccion(cad);
                std::cout<<"\nIntroduzca la localidad del juagador: ";
                getline(std::cin, cad,'\n');
                jugador.setLocalidad(cad);
                std::cout<<"\nIntroduzca la provincia del juagador: ";
                getline(std::cin, cad,'\n');
                jugador.setProvincia(cad);
                std::cout<<"\nIntroduzca el pais del juagador: ";
                getline(std::cin, cad,'\n');
                jugador.setPais(cad);

                if(r.addJugador(jugador))
                {
                    std::cout<<"El jugador se añadió\n";
                }

                else
                {
                    std::cout<<"El jugador no se ha podido añadir porque ya estaba en la mesa\n";
                }

                loop=true;

            break;
            
            default:
            
                std::cout<<"Error seleccione una opción valida.";
                loop=true;

            break;
        }
    }
    system("pause");
}