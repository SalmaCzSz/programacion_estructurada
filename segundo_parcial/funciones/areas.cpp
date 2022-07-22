/*Programa aplicando funciones realizando como funcion que calcule el area y volumen del circulo del cuadrado y de un cono */
#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdio.h>
using namespace std;
float circulo (float a,float b);
int cuadro (int a,int b);
float cono (float a,float b,float c);
int main()
{
	float v1,v2,v3,area;
	int op,s;
    do
	{
	
	cout<<"¿De que figura deseas determinar area?\n1)Circulo\n2)Cuadro\n3)Cono\n";
	cin>>op;
	switch(op)
	{
		case 1:
			cout<<"Circulo\nIngresa Radio ";
			cin>>v1;
			v2=3.1416;
			area=circulo (v2,v1);
			cout<<"El area es "<<area;
			break;
		case 2:
			cout<<"Cuadrado\nIngresa base ";
			cin>>v1;
			cout<<"Ingresa Altura ";
			cin>>v2;
			area=cuadro(v1,v2);
			cout<<"El area es "<<area;
			break;
		case 3:
		    cout<<"Cono\nIngresa Radio ";
		    cin>>v1;
		    cout<<"Ingresa Generatriz ";
		    cin>>v2;
		    v3=3.1416;
		    area=cono (v3,v1,v2);
		    cout<<"El area es "<<area;
			break;
			default:
			cout<<"Opcion Erronea\n";
	}
    cout<<"\nDesea realizar otra operacion\n1)Si\n2)No\n";
	cin>>s;
	system ("cls");
	}
	while (s == 1);
  getchar();
   return 0;
	}

float circulo (float a,float b)
{
	float res;
	a=3.1416;
	res=a*(b*b);
    return res;
}

int cuadro (int a,int b)
{
	int res;
	res=a*b;
    return res;
}

float cono (float a,float b,float c)
{
	int res;
	a=3.1416;
	res=(a*b)*(c+b);
	return res;
}


