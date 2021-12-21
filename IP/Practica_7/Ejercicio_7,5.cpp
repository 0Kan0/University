#include <string>
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std; 

void replace(string &cad, char a, char b){

	for (int i=0; i<cad.size(); i++){
		if (cad[i]==a){
			cad[i]=b;
		}
	}
}

int main(){
	char a, b;
	string cad;

	cout<<"Nombre del char:"<<endl;
	getline(cin, cad);
	cout<<"Caracter a sustituir:"<<endl;
	cin>>a;
	cout<<"Caracter para remplazar:"<<endl;
	cin>>b;
	replace(cad,a,b);
	cout<<"La cadena ahora es:"<<cad<<endl;

cin.ignore();
cin.get();
}
