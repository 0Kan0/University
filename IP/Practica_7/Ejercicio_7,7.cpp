#include <cstdio>
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std; 

bool palindromo(string cad){;
	for (int i=0; i<cad.size()-1; i++){
		for (int j=cad.size()-1; j>=i; j--){
			if (cad[i]!=cad[j]){
			return false;
			}
		}
	}
return true;
}

int main(){

string cad;
cout<<"Introduce la cad:"<<endl;
cin>>cad;
	if (palindromo(cad)==true){
		cout<<"La palbra es un palindromo"<<endl;
	}
	else{
		cout<<"La palbra no es un palindromo"<<endl;
	}

cin.ignore();
cin.get();
}
