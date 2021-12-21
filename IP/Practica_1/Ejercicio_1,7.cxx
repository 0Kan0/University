#include <iostream>
using namespace std;
int main(){

float x, y, z;
float media;

cout <<"Introduzca la nota de la practica:"<<endl;
cin>>x;

cout<<"Introduzca la nota del parcial:"<<endl;
cin>>y;

cout<<"Introduzca la nota del examen final:"<<endl;
cin>>z;

media=x*0.25+y*0.25+z*0.5;

cout<<"Su media es :"<<media<<endl;

cin.ignore();
cin.get();

}

