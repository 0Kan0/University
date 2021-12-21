#include <iostream>
using namespace std;
int main(){

float x;

cout<<"Introduzca un numero del 1 al 7, cada uno equivale a un dia de la semana"<<endl;
cin>>x;

if ( x==1){
cout <<"Es lunes"<<endl;
}

if ( x==2){
cout <<"Es martes"<<endl;
}

if ( x==3){
cout <<"Es miercoles"<<endl;
}

if ( x==4){
cout <<"Es jueves"<<endl;
}

if ( x==5){
cout <<"Es viernes"<<endl;
}

if ( x==6){
cout <<"Es sabado"<<endl;
}

if ( x==7){
cout <<"Es domingo"<<endl;
}


cin.ignore ();
cin.get();
}

