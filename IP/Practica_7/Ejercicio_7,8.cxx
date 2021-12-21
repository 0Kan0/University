#include <cstdio>
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std; 

bool control(string &cad){
	if (cad.size()!=9){
		return false;
	}
	for (int i=0; i<cad.size(); i++){
		if (!isdigit(cad[i])){
			return false;
		}
	}

cad[8]=toupper(cad[8]);
int numero=stoi(cad);
char letras[]="TRWAGMYFPDXBNJZSQVHLCKE";
	if (cad[8]!=letras[(numero%23)+1]){
		return false;
	}
return true;
}

int main(){
	string dni;
	cout<<"Introduzca su DNI"<<endl;
	cin>>dni;
	if (control(dni)){
		cout<<"Su DNI es correcto"<<endl;
	}
	else {
		cout<<"Su DNI no es correcto"<<endl;
	}

cin.ignore();
cin.get();
}