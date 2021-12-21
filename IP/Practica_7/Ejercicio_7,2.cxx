#include <cstdio>
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std; 

int digitos(string cad){
int digito=0;
	for (int i=0; i<cad.size(); i++){
		if (isdigit(cad[i])==1){
			digito++;
		}
	}
return digito;
}

int main(){
	string cad;
	int v;
	cout<<"Introduzca una cadena de digitos y le dire cuantos hay:"<<endl;
	cin>>cad;
	v=digitos(cad);
	cout<<"Tiene"<<v<<"digitos"<<endl;

cin.ignore();
cin.get();
}