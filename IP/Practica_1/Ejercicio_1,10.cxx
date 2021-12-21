#include <iostream>
using namespace std;
int main (){

int x;

cout<<"Escriba un numero entero y le dire si es par o no"<<endl;

cin>>x;

if (x % 2 == 0){
cout<<"El numero es par"<<endl;
}

else {
cout<<"El numero es impar"<<endl;
}

cin.ignore();
cin.get();

}

