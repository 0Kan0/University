#include <iostream>
using namespace std;
int main(){

int x;

cout<<"Introduzca un numero del 1 al 12 y le dire cuantos dias tiene ese mes"<<endl;

cin>>x;

if (x==2){
cout<<"Tiene 28 dias"<<endl;
}

else {
if ((x==1) || (x==3) || (x==5) || (x==7) || (x==8) || (x==10) || (x==12)){
cout<<"Tiene 31 dias"<<endl;
}
else {
cout<<"Tiene 30 dias"<<endl;
}
}


cin.ignore();
cin.get();
  
}

