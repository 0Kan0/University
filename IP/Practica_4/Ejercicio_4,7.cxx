#include <iostream>
using namespace std;

int divis(int v){
	
	int i;
	for (i=1;i<=v; i++){

		if (v%i==0){
			cout<<i<<endl;
		}
	}
return v;
}

int main(){

	int v, i=1;
	cout<<"Introduzca un valor"<<endl;
	cin>>v;


	cout<<divis(v)<<endl;
	


cin.ignore();
cin.get();
}