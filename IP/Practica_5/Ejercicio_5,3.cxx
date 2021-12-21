#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;
int main(){
	
	int secs=time(0);
	srand(secs);
	for(int i=0; i<10; i++){
		int n=rand()%50;
		cout<<n<<endl;
		}

cin.ignore();
cin.get();
}