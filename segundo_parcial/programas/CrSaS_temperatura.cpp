/*Programa que solicita la temperatura de 10 dias y muestre:
el promedio de las temperaturas
el dia y la temperatura mas alta
el dia y la temperatura mas baja*/

#include<iostream>
using namespace std;
int main ()
{
	int i;
	int t [10];
	int sum;
	int prom;
	int mayor=0;
	int menor=1000;
	
	for (i=1;i<=10;i++)
	{
	
		cout<<"Ingresa la temperatura del dia "<<i<<"\n";
		cin>>t [i];
		
		if (t[i]<menor) menor=t[i];
	    if (t[i]>mayor) mayor=t[i];
	
		
		sum=sum+t[i];
		prom=sum/10;   
	}
	cout<<"El promedio de temperaturas es "<<prom<<"\n";
	cout<<"La temperatura mas alta fue "<<mayor<<"\n";
	cout<<"La temperatura mas baja fue "<<menor<<"\n";
	cout<<"La temperatura del dia 5 fue "<<t[5];
	
}
