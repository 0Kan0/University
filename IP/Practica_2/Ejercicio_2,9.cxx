#include <iostream>
using namespace std;
int main (){

int x, a, b=0;

cout<<"Escriba un numero"<<endl;
cin>>x;

for (a=0; a<=x; a++){

if ((a%2==0) || (a%3==0)){
b=b+a;

}

}

cout<<"la suma es"<<b<<endl;
cin.ignore();
cin.get();

}