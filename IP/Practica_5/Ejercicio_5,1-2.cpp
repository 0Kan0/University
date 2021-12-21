
#include <iostream>
using namespace std;
void lee(float v[], int n){
	int i;
	for (i=0; i<n; i++){
	cin>>v[i];
	}
}

void imprime(float v[], int n){
	int i;
	for (i=0; i<n; i++){
	cout<<"El valor del vector es"<<" "<<v[i]<<endl;
	}
}

int main(){

	float v[10];
	lee(v,10);
	imprime(v,10);

cin.ignore();
cin.get();

}