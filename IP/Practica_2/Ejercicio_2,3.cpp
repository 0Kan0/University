#include <iostream>
using namespace std;
int main(){

int i, fact=1;
cout<<"Escriba un numero y calculare su factorial"<<endl;
cin>>i;
if (i<=0){

cout<<"Porfavor introduzca un numero mayor a 0"<<endl;
}

else{

while(i>=1){
fact=fact*i;
i=i-1;
}
cout<<"El factorial es:"<<fact<<endl;

}



cin.ignore();
cin.get();

}