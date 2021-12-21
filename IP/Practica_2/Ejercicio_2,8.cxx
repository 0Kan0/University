#include <iostream>
using namespace std;
int main (){

int  a, b, s, i=0, n;

cout<<"Escriba los n numeros de la sucesion de Fibonacci quiere ver"<<endl;

cin>>n;

a=0;
b=1;

if(n<3){
cout<<a<<b;
}
else{
while(i<n){
s=a+b;
a=b;
b=s;
i++;
cout<<s<<endl;
}
}






cout<<s<<endl;





cin.ignore();
cin.get();
}