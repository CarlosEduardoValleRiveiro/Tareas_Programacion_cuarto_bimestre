#include <iostream>

using namespace std;

int main() {

int x;

cout<<"Ingrese la acntidad de  datos que quiere que tengan los arreglos"<<endl;

cin>>x;

int vector1[x], vector2[x];

cout<<"Ingrese los datos del arreglo"<<endl;

for(int i=0; i<x; i++)
{
	
	cin>>vector1[i];
	
}

cout<<"El arreglo es: "<<endl;

for(int i=0; i<x; i++)
{
	
	cout<<vector1[i]<<"  ";
	
}

cout<<endl;

cout<<"El segundo arreglo es: "<<endl;

for(int i=0; i<x; i++)
{
	
	vector2[i]=vector1[i]*2;
	
	cout<<vector2[i]<<"  ";
}

}
