#include <iostream>
using namespace std;
int main(){
float a, b;
int i;
cout<<"Introduzca 5 valores y le dire cual es el menor"<<endl;
cout<<"Introduzca otro valor"<<endl;
cin>>a;

for (i=2; i<6; i++){
  cin>>b;
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