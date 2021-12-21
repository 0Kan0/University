#include <iostream>
using namespace std;
int main(){

int i, fact=0;
cout<<"Escriba un numero y calculare la suma de todos los numeros anteriores a este"<<endl;
cin>>i;
if (i<=0){

cout<<"Porfavor introduzca un numero mayor a 0"<<endl;
}

else{

while(i>=1){
fact=i+fact;
i=i-1;
}
cout<<"La suma de todos los numeros anteriores es:"<<fact<<endl;

}


cin.ignore();
cin.get();
}