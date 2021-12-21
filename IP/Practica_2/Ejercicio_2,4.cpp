#include <iostream>
using namespace std;
int main(){

int x, suma=0, i=0;

cout<<"Introduzca un numero entero y hare la suma de todos los numeros impares anteriores a el"<<endl;
cin>>x;

while (i<=x){


if( i%2!=0){
suma=suma+i;
}

i=i+1; 

}

cout<<"La suma de todos los numeros impares es:"<<suma<<endl;

cin.ignore();
cin.get();
}

