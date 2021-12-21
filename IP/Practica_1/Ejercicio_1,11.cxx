#include <iostream>
using namespace std;
int main (int argc, char **argv){

int a, b;

cout<<"Escriba 2 numeros, el primero sera a y el segundo b. Si a es mayor que b, hare que se intercambien."<<endl;

cin>>a;
cin>>b;


if (a>b){
cout<<"a="<<b<<"b="<<a<<endl;
}

else {
cout<<"a="<<a<<"b="<<b<<endl;
}

cin.ignore();
cin.get();
}