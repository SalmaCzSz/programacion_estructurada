/*funcion que reciba como parametro una letra y un numero y escrriba en pantalla esa letra repetida el numero de veces ingresado*/
#include<iostream>
#include<conio.h>
using namespace std;
int imp ( int v, string l);

int main()
{
	int v,impresion;
	string l;
	cout<<"Ingresa una letra o palabra; ";
	cin>>l;
	cout<<"Ingresa un valor; ";
	cin>>v;
	impresion= imp (v,l);
	cout<<impresion<<"\n";
} 

int imp (int v, string l)
{
	int m;
	for (m=1;m<=v;m++)
	{
		cout<<l<<"\n\n";
	}
}
