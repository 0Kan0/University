#include <cstdio>
#include <iostream>
#include <cstring>
#include <cstdlib>
using namespace std; 

int find(string a, string b){

int res=-1;
bool aux=true;
	for (int i=0; i<a.size(); i++){
		if (a[i]==b[0]){
			int aux2=0;
			while (aux==true && aux2<b.size()){
				if (a[i+aux2]!=b[aux2]){
					aux=false;
				}
			aux2++;	
			}
			if (aux2==b.size()){
				res=i;
				return res;
			}		
		}
	}
return res;
}
			

int main(){
	string a, b;
	getline(cin,a);
	getline(cin,b);
	cout<<find(a,b)<<endl;

cin.ignore();
cin.get();
}

