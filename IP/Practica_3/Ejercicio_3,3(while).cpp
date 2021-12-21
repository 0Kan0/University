#include <iostream>
using namespace std;
int main(){
int a=0, n, i=0;
cout<<"Introduzca un numero para saber si es primo"<<endl;
cin>>n;

if (n>0){
   while ( i<=n){
     i++;
     if (n%i==0){
       a=a+1;
      }
   }
   if (a==2){
   cout<<"El numero es primo"<<endl;
   }
   else {
    cout<<"El numero no es primo"<<endl;
    }
}

else{
    while ( i>=n){
     i--;
     if (n%i==0){
       a=a+1;
      }
   }
   if (a==2){
   cout<<"El numero es primo"<<endl;
   }
   else {
    cout<<"El numero no es primo"<<endl;
    }
}




cin.ignore();
cin.get();
}
