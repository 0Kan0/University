#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
std::srand(time(0));
int n, secreto= rand() % 1000;
cout<<"Intente adivinar el numero introduciendolo a continuacion, el programa te dara pistas"<<endl;
cin>>n;
for (  ; n!=secreto; ){
if (n<secreto){
    cout<<"El numero es mayor al introducido"<<endl;
    cout<<"Intentelo otra vez"<<endl;
    cin>>n;
    }
  
 if (n>secreto){
    cout<<"El numero es menor al introducido"<<endl;
    cout<<"Intentelo otra vez"<<endl;
    cin>>n;
    }
}

 cout<<"Enhorabuena, has acertado, era: "<<secreto<< endl;



cin.ignore();
cin.get();
}


