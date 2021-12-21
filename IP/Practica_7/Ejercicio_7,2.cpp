#include <cctype>
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std; 

int digitos(string cad){
int digito=0;
	for (int i=0; i<cad.size(); i++){
		if (isdigit(cad[i])){
			digito++;
		}
	}
return digito;
}

int main(){
	string cad;
	cout<<"Introduzca una cadena de digitos y le dire cuantos hay:"<<endl;
	getline(cin,cad);
	cout<<"Tiene"<<" "<<digitos(cad)<<" "<<"digitos"<<endl;

cin.ignore();
cin.get();
}
