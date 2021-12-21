#include <iostream>
using namespace std;
int main(){

float n, suma, media;
int contador;

suma=0;

cout<<"Introduzca cuantos numeros quiere hacer la media"<<endl;
cin>>contador;

while (contador>0){

cout<<"Introduzca un numero"<<endl;
cin>>n;


suma=suma+n;
contador=contador-1;

if (n<=0){
exit (-1);
}


}

media=suma/n;

cout<<"La media es:"<<media<<endl;


    cin.ignore();
    cin.get();
}

