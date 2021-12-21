#include <iostream>
using namespace std;
int main(){
float a, b=0, c;
int i=1;
cout<<"Introduzca los valores para realizar su media:"<<endl;

while (c<30){
cin>>a;
b=b+a;
c=b/i; 
i++;


}

cout<<"Su media es de: "<<c<<" Siendo "<<a<<" El ultimo numero introducido"<<endl;



cin.ignore();
cin.get();
}

