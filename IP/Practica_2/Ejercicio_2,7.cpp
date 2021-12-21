#include <iostream>
using namespace std;
int main(){

int a, i, n;

a=0;

cout<<"Escriba un numero y le dire si es primo o no"<<endl;
cin>>n;

for (i=1; i<(n+1); i++){

        if (n%i==0){

        a++;

       }
}

if (a==2){
cout<<"El numero es primo"<<endl;
}

else {
cout<<"El numero no es primo"<<endl;
}


cin.ignore();
cin.get();
}

