#include <iostream>
#include <cmath>
using namespace std;
int main (){

float a, b, c, d;
float distancia_r;

distancia_r = sqrt(((c-a)*(c-a )) + ((d-b)*(d-b)));

cout<<"Escriba 2 vectores de 2 componentes (x,y), a continuacion, calculare su distancia en modulo:"<<endl;
cin>>a; cin>>b;
cin>>c; cin>>d;

cout<<"La distancia en modulo de los vectores es:"<<sqrt(((c-a)*(c-a )) + ((d-b)*(d-b)))<<endl;

cin.ignore();
cin.get();

}