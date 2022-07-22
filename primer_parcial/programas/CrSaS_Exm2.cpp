/*Programa que teniendo como datos 70 numeros enteros calcule el mayor y el menor de estos*/
#include<iostream>
using namespace std;
int main ()

{
	int i;//contador
	int n;//variable
	int menor;
	int mayor;
	
	for (i=1;i<=70;i++)
	{
		cout<<"Ingresa "<<i<<" numero entero\n";
		cin>>n;
		
		if (n>mayor) mayor=n;
		if (n<menor) menor=n;
	}
	cout<<"El numero mayor es "<<mayor<<"\n";
	cout<<"El numero menor es "<<menor;
}
