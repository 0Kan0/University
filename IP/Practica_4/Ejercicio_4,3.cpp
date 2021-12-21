#include <iostream>
using namespace std;

float fact(int v){

int i;

for (i=v-1; i>=1; i--){

v=v*i;

}

return v;
}

int main(){
int v;

cout<<"Introduzca un valor"<<endl;

cin>>v;

cout<<fact(v)<<endl;



cin.get();
cin.ignore();
}