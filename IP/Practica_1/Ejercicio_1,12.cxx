#include <iostream>
using namespace std;
int main(){

int x;

cout<<"Introduzca un numero del 1 al 7, cada uno equivale a un dia de la semana"<<endl;
cin>>x;

switch (x){

case 1: {
cout<<"Es lunes"<<endl;
}break;

case 2: {
cout<<"Es martes"<<endl;
}break;

case 3: {
cout<<"Es miercoles"<<endl;
}break;

case 4: {
cout<<"Es jueves"<<endl;
}break;

case 5: {
cout<<"Es viernes"<<endl;
}break;

case 6: {
cout<<"Es sabado"<<endl;
}break;

case 7: {
cout<<"Es domingo"<<endl;
}break;

default: {
cout<<"Porfavor, introduzca un numero del 1 al 7"<<endl;
}
}

cin.ignore();
cin.get();

}