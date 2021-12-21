#include <cstdio>
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std; 

void replace(char cad[], char a, char b){
	int leng=strlen(cad);

	for (int i=0; i<leng; i++){
		if (cad[i]==a){
			cad[i]=b;
		}
	}
}

int main(){
	char cad1[20], w, z;

	cout<<"Nombre del char:"<<endl;
	cin>>cad1;
	cout<<"Caracter a sustituir:"<<endl;
	cin>>w;
	cout<<"Caracter para remplazar:"<<endl;
	cin>>z;
	replace(cad1,w,z);
	cout<<"La cadena ahora es:"<<cad1<<endl;

cin.ignore();
cin.get();
}
