#include <iostream>

#include <conio.h>

#include <string.h>

using namespace std;

int main() {

    char palabra[20];

    int longitud;

    cout<<"Ingrese una cadena: "<<endl;

    gets(palabra);

    longitud = strlen(palabra);

if(longitud>=10)
{
	
	cout<<"La palabra es: "<<palabra<<endl;
	
}
else
{
	
	cout<<"Faltan caracteres"<<endl;
	
}

    getch();

}
