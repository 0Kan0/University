#include <cstdio>
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std; 

bool palindromo(string cad){
	int j, z=cad.size()-1;
	bool res=true;
	for (int i=0, j=z; i<cad.size() && res==true; i++, j--){
		if (cad[i]!=cad[j]){
			return res=false;
		}
	}
	
return res;
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
