#include <iostream>

#include <conio.h>

using namespace std;

int main() {

	int y, x;
	
	cout<<"Ingrese el numero de filas"<<endl;
	
	cin>>y;
	
	cout<<"Ingrese el numero de columnas"<<endl;
	
	cin>>x;
	
	int matriz[y][x], resultado[y] ;
	
	for (int i=0; i<y; i++){
	for(int f=0; f<x; f++){
		
		cout<<"ingrese el dato en "<<i<<","<<f<<endl;
		cin>>matriz [i][f];
		}
	}
    
    int maxsuma=0, columnamaxima=0;
    
    for (int k=0; k<x; k++){
    	
    	int sumacolumna=0;
    	
    	for (int l=0; l<y; l++){
    		
    		sumacolumna=sumacolumna+matriz[l][k];   
			
			if(sumacolumna>maxsuma){
				maxsuma=sumacolumna;
				columnamaxima=k;
			} 		
		}
    	
	}
	
	cout<<"La matriz es:"<<endl;
	
	for (int j=0; j<y; j++){
	for(int h=0; h<x; h++){
		
		cout<<matriz[j][h]<<"   ";
		
		}
		
		cout<<endl;
		
    }

cout<<"La columna "<<columnamaxima+1<<" tiene una suma de "<<maxsuma<<endl;
    
}
