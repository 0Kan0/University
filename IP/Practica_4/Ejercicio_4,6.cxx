#include <iostream>
using namespace std;

int comb(int n, int k){

	int x=1, y=1, z=1, i;

	y=n-k;

	for (i=y; i>=1; i--){
	y=y*i;
	}

	for (i=k; i>=1; i--){
	x=x*i;
	}

	for (i=n; i>=1; z--){
	z=z*i;
	}

	i=z/x*(y*x);

return i;
}

int main(){

int n, k;

cout<<"Introduzca dos numeros para hallar la combinacion del primero por el segundo"<<endl;

cin>>n;
cin>>k;

cout<<comb(n,k)<<endl;

cin.ignore();
cin.get();
}