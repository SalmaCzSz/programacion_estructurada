/*REALIZAR UN PROGRAMA QUE:
eleve al cuadrado y obtenga la raiz de 20 cantidades ingresadas por el usuario
e imprima los resultados (utilizar matrices)*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int m[20];
	int i,j,k;
	int cuadrado[20];
	float raiz[20];
	cout<<"Ingresa 20 valores y determinaremos el cuadrado de ese numero y su raiz\n";
	for (i=1;i<=20;i++)
	{
		cout<<"\nValor "<<i<<": ";
		cin>>m[i];
	}
	cout<<"\nCuadrado:\n";
	for (j=1;j<=20;j++) 
	{
	     cuadrado[j]=pow (m[j],2);
	     cout<<"\n" <<cuadrado [j];
	}
	cout<<"\n\nRaiz cuadrada:\n";
	for (k=1;k<=20;k++) 
	{
	     raiz[k]=sqrt (m[k]);
	     cout<<"\n" <<raiz [k];
	}
}    
