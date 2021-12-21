#include <iostream>
#include <stdlib.h>
#include <fstream>
#include <ctype.h>
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
	
int Seleccionar_alumno(Alumno alumnos[], int nmatriculados){
	int aux=0,  aux2=0, nalumnos=0;
	string dni;
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
		if (aux2==0){
			cout<<"Alumno no registrado"<<endl;
		}
		else {
			aux=1;
		}
	}
while (aux==0);
return nalumnos;
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
				cin.ignore();
				cin.get();
				system("CLS");
				}break;

			case 2:{
				string dni;
				cout<<"Introduzca el dni del alumno"<<endl;
		      	cin>>dni;
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
				cin.ignore();
				cin.get();
				system("CLS");
				}break;

			case 3:{
				string dni;
				for (int i=0; i<nmatriculados; i++){
					Alumno aux=alumnos[i];
						cout<<"Su dni es:"<<aux.dni<<endl;
						cout<<"Su edad es:"<<aux.edad<<endl;
						cout<<"Su nota es:"<<aux.nota<<endl;
				}
				cin.ignore();
				cin.get();	
				system("CLS");
				}break;

			case 4:{
				int nalumnos=Seleccionar_alumno(alumnos, nmatriculados);
				alumnos[nalumnos]=Nuevo_alumno();
				cout<<"Alumno anadido con exito"<<endl;
				cin.ignore();
				cin.get();
				system("CLS");
				}break;

			case 5:{
				int nalumnos=Seleccionar_alumno(alumnos, nmatriculados);
				for (int i=nalumnos; i<nmatriculados ; i++){
					alumnos[i]=alumnos[i-1];
				}
				nmatriculados--;
				cout<<"Alumno eliminado con exito"<<endl;
				cin.ignore();
				cin.get();
				system("CLS");
				}break;

			}
	}

while (opcion_menu!=6);

	if (opcion_menu=6){
		return -1;
	}

cin.ignore();
cin.get();
}


		
		