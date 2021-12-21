#include <iostream>
using namespace std;

bool esprimo(int v){
	int divisores=0;
		for (int i=1; i<=v; i++){
			if (v%i==0){
				divisores++;
			}
		}
	if (divisores==2){
		return true;
	}
	else {
		return false;
	}
}

void primos(int n){
int j=1;

	for (int i=0; i<=n; i++){
		if (esprimo(j)){
			cout<<j<<endl;
		}
		j++;
	}
}
		
int main(){

	int n;
	cout<<"Introduzca un numero"<<endl;
	cin>>n;

	primos(n);

cin.ignore();
cin.get();
}

