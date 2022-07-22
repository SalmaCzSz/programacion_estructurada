/*en una granja se requiere saber alguna informacion para determinar el precio de la venta por cada kilo de huevos
es importante determinar el promedio de calidad de n gallinas que hay en la granja,la calidad se obtiene :

calidad=peso de gallina*altura de gallina/numero de huevos que pone

finalmente para fijar el precio del kilo de huevo:
promedio total de calidad           precio por kilo
mayor o igual a 15                1.2*promedio de calidad
mayor que 8 menor que 15          1.*promedio de calidad
menor o igual a 8                 0.8*promedio de calidad*

programacon las siguientes funciones:
1 funcion que solicita peso,altura,n huevos=calidad
2 funcion que calcule el precio por kilo de huevo calidad>=15
3 funcion para realizar una venta
4 funcion para imprimir el tiket*/
#include<iostream>
#include<string.h>
using namespace std;
float calidad (int a,int b,int c);
float costo (float c);
float venta (int kilo, int costo);
int main ()
{
	int peso,altura,huevos;
	float cld,prom,precio;
	int i,n,acum=0;
	int kilos,pagar;
	string r;
	r="si";
	string s;
	s="si";
	
	cout<<"\nIngresa Numero De Gallinas: ";
	cin>>n;
	cout<<"\n\n";
	system ("cls");
	cout<<"Ingresa los siguientes datos:\n";
	
	for (i=1;i<=n;i++)
	{
		cout<<"\nGallina "<<i<<"\nPeso (gramos): ";
		cin>>peso;
		cout<<"\nAltura (centimetros): ";
		cin>>altura;
		cout<<"\nCantidad de huevos que pone: ";
		cin>>huevos;
		cld=calidad (peso,altura,huevos);
		prom=cld/n;
	}
	system ("cls");
	precio= costo (prom);
	cout<<"\nEl promedio de calidad es: "<<prom<<"\nKilo de huevo $"<<precio;
	
	while (r=="Si" or r=="SI" or r=="si")
	{
		cout<<"\n\n\n¿Va a realizar una venta?\nRespuesta: ";
		cin>>r;
		
		do
		{
			cout<<"\n\nIngrese venta\nKilos: ";
			cin>>kilos;
			pagar= venta (precio,kilos);
			acum=acum+pagar;
			cout<<"\nHuevo Fresco\nKilos : "<<kilos<<"\nPrecio: $"<<precio<<"\nTotal: $"<<pagar;
			cout<<"\n\n¿Hay mas ventas?\n";
		    cin>>s;
		}
		while (s=="Si" or s=="SI" or s=="si");
		cout<<"\nEl total de las ventas es $"<<acum;
	}
}

float venta (int kilo,int costo)
{
	int total;
	total=kilo*costo;
	return total;
}

float costo (float c)
{
	int precio;
	if (c>=15)
	{
		precio=c*1.2;
	}
	else
	{
		if (c>8 and c<15)
		{
			precio=c*1;
		}
		else
		{
			if (c<=8)
			{
				precio=c*0.8;
			}
		}
	}
	return precio;
}

float calidad (int a,int b,int c)
{
	int res;
	res=(a*b)/c;
	return res;
}
