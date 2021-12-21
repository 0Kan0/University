#include <iostream>
using namespace std;

bool esper(int v){

	bool per;
	if ((v==28) || (v==496) || (v==8128) || (v==33550336)){
	per=true;
	}

	else {
	per=false;
	}

	return per;
}

int main(){
	int v;
	cout<<"Introduzca un valor"<<endl;
	cin>>v;
	if (esper(v)==true){
				cout<<"El valor es perfecto"<<endl;
	}

	else{
				cout<<"El valor no es perfecto"<<endl;
	}


cin.ignore();
cin.get();
}