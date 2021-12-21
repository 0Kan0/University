#include <iostream>
using namespace std;
int main(){
float a, b;
cout<<"Introduzca los numeros que quiera. Despues dire cual es el mayor."<<endl;
cin>>a;
cin>>b;

if ((a<0) || (b<0)){
   if (a>b){
     cout<<"El numero mayor es:"<<a<<endl;
     }
 else {
   if (a<b){
     cout<<"El numero mayor es:"<<b<<endl;
     }
    else {
    cout<<"Los 2 numeros son iguales. Aun asi, el mayor es:"<<a<<endl;
    }
   }
 }

else {
    for ( ; ((a>=0) && (b>=0)); ){
      if (a>b){
        b=a;
        }
       cout<<"Introduzca otro valor"<<endl;
       cin>>a;
       }
     cout<<"El numero mayor es:"<<b<<endl;
     }

cin.ignore();
cin.get();
}