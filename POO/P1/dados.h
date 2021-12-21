// dados.h
// La clase dados representa el lanzamiendo de 2 dados

#ifndef DADOS_H
#define DADOS_H

class Dados
{
    private:
        int d1_;
        int d2_;
        int cont_d1_;
        int cont_d2_;
        float med_d1_;
        float med_d2_;
        int cont_ultimos1;
        int cont_ultimos2;
        int ultimos_d1_[5];
        int ultimos_d2_[5];

    public:
        Dados(); //el constructor no devuelve nada
        int getDado1(); //devuelve el valor del primer dado
        int getDado2(); //devuelve el valor del segundo dado
        bool setDado1(int n); //recibe un entero como único parámetro, y lo asigna al dado 1 si dicho entero está entre 1 y 6, en cuyo caso devuelve true. En caso contrario no lo asigna y devuelve false
        bool setDado2(int n); //igual a la anterior para el segundo dado.
        int getSuma(); //devuelve el valor de la suma de los dos dados
        int getDiferencia(); //devuelve el valor de la resta de los dos dados
        void lanzamiento(); //obtiene un nuevo valor aleatorio para los dos dados
        int getLanzamientos1(); //contabiliza el numero de lanzamientos del dado 1
        int getLanzamientos2(); //contabiliza el numero de lanzamientos del dado 2
        float getMedia1(); //hace la media de todos los lanzamientos del dado 1
        float getMedia2(); //hace la media de todos los lanzamientos del dado 2
        void getUltimos1(int * ultimos); //recibe un vector de enteros como parámetro al que se le deben copiar los 5 últimos valores obtenidos para el primer dado, de modo que el último valor del dado quedará en la posición 0 del vector, el penúltimo en la posición 1, etc.
        void getUltimos2(int * ultimos); //recibe un vector de enteros como parámetro al que se le deben copiar los 5 últimos valores obtenidos para el primer dado, de modo que el último valor del dado quedará en la posición 0 del vector, el penúltimo en la posición 1, etc.
};

#endif