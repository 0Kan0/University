#include <iostream>
using namespace std;
int main(){
float a, b;
int i=2;
cout<<"Introduzca 5 valores y le dire cual es el menor"<<endl;
cin>>a;

while (i<6){
  cin>>b;
   i++;
  if (a<b){
  cout<<"Introduzca otro valor"<<endl;
  }
  
  else{ 
  a=b;
  cout<<"Introduzca otro valor"<<endl;
  }
}

cout<<"El numero menor es:"<<a<<endl;




cin.ignore();
cin.get();
}