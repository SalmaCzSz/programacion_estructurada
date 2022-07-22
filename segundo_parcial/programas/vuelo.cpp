/*Programa que mediante un menu admita reservar o cancelar asientos de un avion, asi como mostrar que asiento esta ocupado y que asiento esta libre. Considerar un avion que maneje 3 filas con 4 asientos por fila*/
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main()

{
	int t[4];
	int a[4];
	int b[4];
	int i,j,k;//contador
	int op;//menu
	int r;
	
	
	cout<<"Bienvenido\Que opcion deseas realizar?\n 1)Reservar un vuelo\n 2)Cancelar un vuelo\n";
	cin>>op;
	
	switch (op)
	{
	case 1:
		cout<<"Los asientos disponibles son:\n";
		
		for (i=1;i<=4;i++)
		{
			cout<<" "<<t[i];
		}
		cout<<"\n¿Que asiento desea reservar\n?";
		cin>>r;
		break;
	case 2:
		cout<<"Que asiento desea cancelar\n?";
		cin>>r;
	break;
	default:
		cout<<"Opcion Invalida";
    }
}
