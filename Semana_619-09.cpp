//Carlos Valle

#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

int noempleados, opc, opc2, id;

double aux, aux2, aux3;

char nombre[20];

int main() {

cout<<"Ingrese el numero de empleados"<<endl<<endl;

cin>>noempleados;

struct empleado{
	char nombre[20];
	double salario;
	int id;
}

empleado[noempleados];

double salario[noempleados];

int id2[noempleados];

while (opc<5)
{

cout<<"\n1: Ingresar informacion de los empleados\n2: Encontrar el mayor salario\n3: Encontrar el menor salario\nEncontrar empleado\n5: Salir";

cin>>opc;

switch(opc)
{

case 1:{

cout<<"Ingrese Los datos de los empleados"<<endl<<endl;

for(int i=0;i<noempleados;i++){
	
	cout<<"Ingrese los datos del empleado numero "<<i+1<<" :"<<endl<<endl;
	
	cout<<"Nombre: ";
	
	cin>>empleado[i].nombre;
	
	cin.ignore();
	
	cout<<endl<<endl;
	
	cout<<"Salario: ";
	
	cin>>empleado[i].salario;
	
	cout<<endl<<endl;
	
	cout<<"Identificaciom: ";
	
	cin>>empleado[i].id;
	
	for(int i=0; i<noempleados; i++){
		
		empleado[i].salario=salario[i];
		
	}

	for(int i=0; i<noempleados; i++){
				
		empleado[i].id=id2[i];
				
	}

	for(int i=1; i<noempleados; i++){
	
	for(int j=0; j<noempleados-1; j++){
		
		if(salario[j]>salario[i]){
		
		aux=salario[j];
		
		salario[j]=salario[i];
		
		salario[i]=aux;
		
	}
	}
	}
	}
	
	salario[noempleados-1]==aux2;
	
	salario[0]==aux3;
	
		break;
}
	
case 2:{

cout<<"El salario mas grande es: "<<aux2<<endl;

	break;
	
case 3:{
		
		cout<<"El salario mas pequeño es: "<<aux3<<endl;
		
		break;
	}
	
case 4:{
	
	cout<<"\n1: Buscar por nombre \n2: Buscar por id";
			
			cout<<"\nIngrese la identificacion";
			
			cin>>id;
			
			for(int i=0; i<noempleados; i++){
				
				if(id=id2[i]){
					
					cout<<"\nEl nombre es: "<<empleado[i].nombre;
					
					cout<<"\nEl salario es: "<<empleado[i].salario;
					
					cout<<"\nLa identificacion es: "<<empleado[i].id;
					
				}
				
			}
		
	}
	
	

}
}
}
}

