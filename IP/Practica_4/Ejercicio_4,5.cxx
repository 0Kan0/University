#include <iostream>
using namespace std;

bool prim(int n){
	bool res;
	int i, a=0;
	if (n>0){
			for (i=1; i<=n; i++){
					if (n%i==0){
			a++;
					}
			}

	if (a==1){
	return res==true;
	}

	if (a==2){
	return res=true;
	}

	else{
	return res=false;
	}
}
 else {

for (i=-1; i>=n; i--){
					if (n%i==0){
			a++;
					}
			}

if (a==2){
	return res=true;
	}

	else{
	return res=false;
	}
}
}

int main(){

	int c, d, e=0;
	cout<<"Introduzca un numero"<<endl;
	cin>>c;

	for (d=1; e!=c; d++){
	if (prim(d)==true){
	cout<<d<<endl;
	e++;
	}
}

cin.ignore();
cin.get();
}