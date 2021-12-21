#include <iostream>
using namespace std;
int main(){

int x;

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

if ( (x<6) && (x>0) ){
cout<<"Es entre semana"<<endl;
}

if ( (x>5) && (x<8) ){
cout<<"Es fin de semana"<<endl;
}

if (x<0){
cout <<"Por favor introduzca un numero del 1 al 7"<<endl;
}

if (x>7){
cout <<"Por favor introduzca un numero del 1 al 7"<<endl;
}


cin.ignore ();
cin.get();
}

