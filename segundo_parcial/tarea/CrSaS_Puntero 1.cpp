/*Puntero Programa que pide los gastos por dia y al final imprime el total de los gastos de la semana y el promedio de los gastos*/
#include<iostream>
using namespace std;
int main ()
{
	int g[7];//gastos
	int t=0;//total
	int i;//contador
	float prom;
	
	cout<<"Bienvenido n.n\n";

	for (i=1;i<=7;i++)
    { 
	    cout<<"Ingresa El Total De Los Gastos Del Dia "<<i<<"\n";
	    cin>>g[i]; 
        t=t+g[i];
        prom=t/7;
   }
	cout<<"El Total De Los Gastos De La Semana Es $"<<t;
	
	cout<<"\nEl Promedio De Sus Gastos Es $"<<prom;
	cout<<"\nQue dia deseas visualizar?";
	cin>>i;
	cout<<"\nLos gastos de este dia son $"<<g[i];
}
