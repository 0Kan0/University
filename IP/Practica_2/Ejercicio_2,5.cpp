#include <iostream>
using namespace std;
int main(){

int n, x;

cout<<"Introduzca un numero y le dire todos sus divisores"<<endl;
cin>>n;
cout<<"Los numeros divisores son:"<<endl;
for (x=1; x<=n;x++){
 if (n%x==0){
cout<<x<<endl;
}
}



cin.ignore();
cin.get();
}

