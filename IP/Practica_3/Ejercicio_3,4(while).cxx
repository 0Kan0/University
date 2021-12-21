#include <iostream>
using namespace std;
int main(){

int a, i;
cout<<"Introduzca un numero para saber sus divisores"<<endl;
cin>>a;

if (a>0){
   i=0;
  while (i<=a){
      i++;
     if (a%i==0){
     cout<<i<<endl;

     }
   }
}

else{
  i=0;
  while (i>=a){
     i--;
     if (a%i==0){
     cout<<i<<endl;

     }
   }
}


cin.ignore();
cin.get();
}