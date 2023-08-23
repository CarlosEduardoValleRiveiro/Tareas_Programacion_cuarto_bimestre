#include <iostream>
#include <conio.h>

using namespace std;

int main() {

int x, y;

cout<<"Ingrese el numero de alumnos"<<endl;

cin>>x;

cout<<"Ingrese el numero de clases"<<endl;

cin>>y;

int notas [x][y];

int suma[x], promedio[x];

cout<<"Ingrese las notas de los alumnos"<<endl;

for(int i=0; i<x; i++){
	
	cout<<"Ingrese las notas del estudiante numero "<<i+1<<endl;
	
	for(int j=0; j<y; j++){
		
		cin>>notas [i][j];
		
	}
}

for(int h=0; h<x; h++){
	
	int total=0;
	
	for(int g=0; g<y; g++){
		
		total= notas [h][g]+total;
		
		
		cout<<total<<endl;
		
	}
	
	promedio[h]=total/y;
	
	total=0;
	
}

for(int l=0; l<x; l++){
	
	cout<<"La nota del estudiante numero "<<l<<" es: "<<promedio[l]<<endl;
	
	if(promedio[l]==100){
		
		cout<<"Exelente!"<<endl;
		
	}
	
	if(99>=promedio[l] and promedio[l]>=90){
		
		cout<<"Muy bien"<<endl;
		
	}
	
		if(89>=promedio[l] and promedio[l]>=80){
		
		cout<<"Bien"<<endl;
		
	}
		if(79>=promedio[l] and promedio[l]>=70){
		
		cout<<"Hay que mejorar"<<endl;
		
	}
		if(promedio[l]<=69){
		
		cout<<"Reprobado"<<endl;
		
	}
	
}

}
