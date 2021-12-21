#ifndef CONTADOR_H
#define CONTADOR_H

#include <list>

class Contador //Definición de la clase contador
{

    private:
    int valor_; //Valor actual del contador
    int min_; //Valor minimo que puede tomar el contador
    int max_; //Valor máximo que puede tomar el contador
    std::list<Contador> history_; //Historial de cambios del contador
    void controlValor(); //Función encargada de controlar que valor no supere los limites superior e inferior del intervalo

    public:
    Contador(int valor = 0, int min = 0, int max = 1000);
    Contador operator=(const int &n); //Iguala el valor del contador que la llama al entero n
    Contador operator=(const Contador &contador); //Iguala el valor del contador que la llama al de otro contador
    Contador operator++(void); //Incrementa el valor del contador y lo devuelve incrementado
    Contador operator++(int); //Incrementa el valor pero lo devuelve sin incrementar
    Contador operator--(void); //Decrementa el valor del contador y lo devuelve decrementado
    Contador operator--(int); //Decrementa el valor pero lo devuelve sin decrementa
    Contador operator+(const int &n); //Suma al valor del contador el entero pasado como argumento
    friend Contador operator+(const int &n, const Contador &contador); //Suma al valor del contador el entero pasado como argumento
    Contador operator-(const int &n); //Resta al valor del contador el entero pasado como argumento
    friend Contador operator-(const int &n, const Contador &contador); //Resta al valor del contador el entero pasado como argumento
    bool undo(int const &n = 1); //Deshace tantos cambios como se le indique en el valor n pasado como parámetro. (Por defecto n = 1)
    inline int get() const {return valor_;} //Devuelve el valor actual de la variable valor
};
#endif