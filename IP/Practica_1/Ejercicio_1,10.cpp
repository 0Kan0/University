#include <iostream>
using namespace std;
int main(){

float a, b, c;

cout<<"Introduzca 3 numeros y escribire el mayor que has puesto"<<endl;

cin>>a;
cin>>b;
cin>>c;

if ((a>b) && (a>c)){

cout<<"El numero mayor es:"<<a<<endl;
}

if ((b>a) && (b>c)){

cout<<"El numero mayor es:"<<b<<endl;
}

if ((c>a) && (c>b)){

cout<<"El numero mayor es:"<<c<<endl;
}

cin.ignore();
cin.get();

}

