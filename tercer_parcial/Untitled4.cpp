/*calcular el promedio de 50 valores almacenados en un vector determinar cuantos son mayores que el promedio
e imprimir el promedio, numero de datos mayores que el promedio ,y la lista de valores mayores al promedio*/
#include<iostream>
#include<math.h>
using namespace std;
int main ()
{
	int v[50];
	int lista[50];
	float prom, suma=0;
	int mayor=0;
	int i,j;
	
	cout<<"Ingresa 50 valores\n";
	for(i=1;i<=5;i++)
	{
		cout<<"Valor "<<i<<": ";
		cin>>v[i];
		cout<<"\n";
	  
	    suma=suma+v[i];
		prom=suma/5;
		
		if (v[i]>prom)
		{
			mayor=mayor+1;
		}
	}
		
	cout<<"Promedio: "<<prom;	 
	cout<<"\nTotal de numeros mayores al promedio: "<<mayor;
	cout<<"\n\nNumeros mayores al promedio:\n";
	for (j=1;j<=5;j++)
	{
		if (v[j]>=prom)
		{
			lista[j]=v[j];	   
		}
		else
		{
			lista[j]=0;
		}
		cout<<lista[j]<<"\n";
	}
}
