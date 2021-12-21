#include <iostream>
using namespace std;
int main(){

int a, i;
cout<<"Introduzca un numero para saber sus divisores"<<endl;
cin>>a;

if (a>0){

  for (i=1; i<=a; i++){
    
     if (a%i==0){
     cout<<i<<endl;

     }
   }
}

else{
  for (i=-1; i>=a; i--){
    
     if (a%i==0){
     cout<<i<<endl;

     }
   }
}


cin.ignore();
cin.get();
}

