#include <iostream>
using namespace std;
int main(){

float n, suma, media;
int i;

suma=0;

cout<<"Introduzca cuantos numeros quiere hacer la media"<<endl;
cin>>i;

while (i>0){

cout<<"Introduzca un numero"<<endl;
cin>>n;


suma=suma+n;
i--;

if (n<=0){
exit (-1);
}


}

media=suma/n;

cout<<"La media es:"<<media<<endl;


    cin.ignore();
    cin.get();
}