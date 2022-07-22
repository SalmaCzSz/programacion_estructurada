/*Programa que calcula lo que hay que pagar para un conjunto de llamadas telefonicas
por cada llamada se ingresa el tipo (Internacional,Nacional y Local)
y la duracion en minutos.El criterio que se sigue para calcular el costo de la llamada es el siguiente:
-internacional: 3 primeros minutos=$8 el minuto.Minutos adicionales=$3.50
-Nacional: 3 primeros minutos=$1.20 el minuto.Minuto adicional =$0.50
-Local: primeras 50 llamadas no se cobran. Cada llamada $0.60*/
#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main ()
{
	float s;//costo
	int m;//minutos
	int op;
	int a,b,r;
	do
	{
	cout<<"\nHola \nSelecciona el tipo de llamada que has realizado\n1)Internacional\n2)Nacional\n3)Local\n";
	cin>>op;	
	switch (op)
	
	{
	case 1:
		cout<<"Llamada Internacional\nIngrese minutos que utilizo\n";
		cin>>m;
		if(m<=3) s=8;
		if(m>=4) s=8+3.5;
		cout<<"El costo de su llamada es de $"<<s<<"\n";
		break;
	case 2:
		cout<<"Llamada Nacional\nIngrese minutos que utilizo\n";
	    cin>>m;
	    if (m<=3) s=1.20;
	    if (m>=4) s=1.20+0.5;
	    cout<<"El costo de su llamada es de $"<<s<<"\n";
		break;
	case 3:
		cout<<"Llamada local\nIngrese numero de llamadas que realizo\n";
		cin>>m;
		if (m<=50) s=0;
		if(m>=51) s=0.60*m;
		cout<<"El costo de su(s)"<<m<<" llamada(s) es de $"<<s<<"\n";
		break;
		default:
	    cout<<"opcion no valida\n";
	}
	cout<<"Realizo llamadas de otro tipo\n1)Si\n2)No\n";
	cin>>r;
    system ("cls");
    }
	while (r == 1);
	getch ();
	return 0;   
}
