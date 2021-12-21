#include <iostream>
using namespace std;

bool espar(int v){

	if (v%2==0){
		return true;
	}

	else {
		return false;
	}
	
}

int main(){
	int n;
	cout<<"Introduzca un valor"<<endl;
	cin>>n;
	if (espar(n)==true){
				cout<<"El valor es par"<<endl;
	}

	else{
				cout<<"El valor no es par"<<endl;
	}


cin.ignore();
cin.get();
}