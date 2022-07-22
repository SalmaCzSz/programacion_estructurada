/*Ciclo For programa para calcular el promedio de calificaciones*/
#include<iostream>
using namespace std;
int main()
{
	int i;//contador
	float c;
	int s=0;
	float prom;
	
	cout<<"Bienvenido,Para Saber Tu Promedio\n";
	for(i=1;i<=9;i++)
	{
		cout<<"Ingresa Calificacion "<<i<<"\n";
		cin>>c;
		s=s+c;
		prom=s/9;
	}
	cout<<"Tu Promedio Es De "<<prom;
}
