#include <iostream>
using namespace std;

int divis(int v){
	
	
	
	for (int i=1;i<=v; i++){

		if (v%i==0){
			cout<<i<<endl;
		}
	}
return v;
}

int main(){

	int v;
	cout<<"Introduzca un valor"<<endl;
	cin>>v;


	cout<<divis(v)<<endl;
	


cin.ignore();
cin.get();
}