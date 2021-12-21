#include <iostream>
using namespace std;

bool esprim(int v){

	int i, ndiv=0;
	
	for(i=1; i<=v; i++){

	if (v%i==0){
	ndiv++;
	}
}
bool esprim;

if (ndiv<=2){

return esprim=true;
}

else{

return esprim=false;
}
}
int main(){

int v;
cout<<"Introduzca un numero"<<endl;
cin>>v;
if (esprim(v)==true){
cout<<"Es primo"<<endl;
}

else{
cout<<"No es primo"<<endl;
}



cin.ignore();
cin.get();
}