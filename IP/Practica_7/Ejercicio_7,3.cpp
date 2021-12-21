#include <cstdio>
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std; 

void convierte_a_mayuscula(string &cad){

	for (int i=0; i<cad.size(); i++){
		cad[i]=toupper(cad[i]);
	}
}

int main(){
	string cad;
	getline(cin,cad);
	convierte_a_mayuscula(cad);
	cout<<cad<<endl;
cin.ignore();
cin.get();
}

