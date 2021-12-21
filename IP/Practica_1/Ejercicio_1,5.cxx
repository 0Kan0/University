#include <iostream>
using namespace std;
int main(){

float x;

cout<<"Introduzca un numero y le dire si es mayor, menor o igual a 0"<<endl;
cin>>x;

if (x<0){
cout<<"El numero es menor que 0"<<endl;
}

if (x>0){
cout<<"El numero es mayor que 0"<<endl;
}

if (x==0){
cout<<"El numero es igual a 0"<<endl;
}

cin.ignore();
cin.get();

}

