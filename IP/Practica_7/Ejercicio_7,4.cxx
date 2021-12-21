#include <cstdio>
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std; 

int vocales(string cad){
	int s=0;
	for (int i=0; i<cad.size(); i++){
		switch(cad[i]){
			case'	a':
			case'A':
			case'e':
			case'E':
			case'i':
			case'I':
			case'o':
			case'O':
			case'u':
			case'U':
			{
			s++; break;
		}
	}
}
return s;
}

int main(){
string cad;
	cout<<"Introduce una plabra:"<<endl;
	cin>>cad;
	cout<<"La palabra tiene"<<vocales(cad)<<"vocales"<<endl;

cin.ignore();
cin.get();
}