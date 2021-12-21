#include <cstdio>
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std; 

int espacios(string cad){

int s=0;
	
	for (int i=0; i<cad.size();i++){
		if (cad[i]==32){
			s++;
		}
	}
return s;
}

int main(){
	string cad;
	cout<<"Introducir cad:"<<endl;
	getline(cin,cad);
	int v=espacios(cad);
	cout<<"Numeros de espacos en la funcion:"<<v<<endl;

cin.ignore();
cin.get();
}