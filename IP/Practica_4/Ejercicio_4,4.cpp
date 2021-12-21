#include <iostream>
using namespace std;

int div(int v){

int i=1;

while (i>=1){

	if (v%i==0){
	cout<<i<<" "<<endl;
	}
i++;
}

return v;
}

int main(){
int v;
cout<<"Introduzca un valor"<<endl;
cin>>v;

cout<<div(v)<<endl;


cin.ignore();
cin.get();
}