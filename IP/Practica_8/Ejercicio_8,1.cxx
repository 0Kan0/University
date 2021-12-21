#include <iostream>
#include <cctype>
#include <string>
#include <cmath>
#include <vector>
using namespace std;

struct Alumno{
	string dni;
	int edad;
	float nota;
};

Alumno Nuevo_alumno(){
	cout<<"Escriba los datos del alumno"<<endl;
	Alumno nuevo;
	cout<<"Introduzca el dni del alumno"<<endl;
		cin>>nuevo.dni;
	cout<<"Introduzca la edad del alumno"<<endl;
		cin>>nuevo.edad;
	cout<<"Introduzca la nota del alumno"<<endl;
		cin>>nuevo.nota;
			return nuevo;
}

void Ver_alumno(string dni, int nmatriculados, Alumno alumnos[]){
	int aux2=0;
	for (int i=0; i<nmatriculados && aux2==0; i++){
		Alumno aux=alumnos[i];
		if (dni==aux.dni){
			cout<<"Su dni es:"<<aux.dni<<endl;
			cout<<"Su edad es:"<<aux.edad<<endl;
			cout<<"Su nota es:"<<aux.nota<<endl;
			aux2=1;
		}
	}
}
	
int Seleccionar_alumno(Alumno alumnos[], int nmatriculados){
	int aux=0, aux2=0, nalumnos=0;
	string dani;
	do{
		cout<<"Introduzca el dni del alumno"<<endl;
		cin>>dni;
		for (int i=0; i<nmatriculados && aux2==0; i++){	
			Alumno aux=alumnos[i];
			if (dni==aux.dni){
				aux2=1;
				nalumnos=i;
			}
		}
while (aux==0);
return nalumnos;
}

void Eliminar_alumno(Alumno alumnos[], int nmatriculados, int nalumnos){
	for (int i=nalumnos; i<nmatriculados ; i++){
		alumnos[i]=alumnos[i+1];
	}
}

int main(){

	Alumno alumnos[10];
	int nmatriculados=0;
	int opcion_menu=0;
	
	do{
		cout<<"Seleccione una opcion:"<<endl;
		cout<<"1. Anadir alumno"<<endl;
		cout<<"2. Imprimir datos de un alumno"<<endl;
		cout<<"3. Imprimir datos de todos los alumnos"<<endl;
		cout<<"4. Modificar alumno"<<endl;
		cout<<"5. Eliminar un alumno"<<endl;
		cout<<"6. Salir"<<endl;
			cin>>opcion_menu;

		  switch(opcion_menu){
			case 1:{
				alumnos[nmatriculados]=Nuevo_alumno();
				nmatriculados++;
				cout<<endl;
				cin.ignore();
				cin.get();
					
				}break;

			case 2:{
				string dni;
				cout<<"Introduzca el dni del alumno"<<endl;
		      	cin>>dni;
				Ver_alumno();
				cout<<endl;
				cin.ignore();
				cin.get();

				}break;

			case 3:{
				for (int i=0; i<nmatriculados; i++){
					Alumno aux=alumnos[i];
						Ver_alumno();
					cout<<endl;
				}
				cin.ignore();
				cin.get();	
				}break;

			case 4:{
				int nalumnos=Seleccionar_alumno();
				alumnos[nalumnos]=Nuevo_alumno();
				cout<<"Alumno anadido con exito"<<endl;
				cout<<endl;
				cin.ignore();
				cin.get();

				}break;

			case 5:{
				int nalumnos=Seleccionar_alumno();
				Eliminar_alumno();
				nmatriculados--;
				cout<<"Alumno eliminado con exito"<<endl;
				cout<<endl;
				cin.ignore();
				cin.get();
			
				}break;

			case 6:{
					return -1;
					cin.ignore();
					cin.get();

				}break;
			};
	}

cin.ignore();
cin.get();
}


		
		