/*REALIZAR UN PROGRAMA QUE CALCULE EL AREA DE UN TRIANGULO, DEL CIRCULO Y EL AREA DEL ROMBOIDE EMPLEANDO FUNCIONES*/
#include<iostream>
#include<math.h>
using namespace std;
float triangulo (float a,float b);
float circulo (float a,float b);
float romboide (float a,float b);
int main ()
{
	int op;
	float a,b,r,s;
	float area;
	do
	{
		
	
	cout<<"Hola elige la figura de la cual deseas calcular el area\n1)Triangulo\n2)Circulo\n3)Romboide\n\nFigura ";
	cin>>op;
	switch (op)
	{
		case 1:
			cout<<"\nTriangulo\nIngresa\nBase: ";
			cin>>a;
			cout<<"\nAltura: ";
			cin>>b;
			area=triangulo (a,b);
			cout<<"\nEl area es "<<area;
		break;
		case 2:
			cout<<"\nCirculo\nIngresa\nRadio: ";
			cin>>b;
			a=3.1416;
		    area=circulo (a,b);
			cout<<"\nEl area es "<<area;
	    break;
	    case 3:
	    	cout<<"\nRomboide\nIngresa\nBase: ";
			cin>>a;
			cout<<"\nAltura: ";
			cin>>b;
			area=romboide (a,b);
			cout<<"\nEl area es "<<area;
		break;
		default:
		cout<<"Opcion erronea\n";
	}
	cout<<"\n\n\nDeseas obtener mas areas?\n1)Si\n2)No\n";
	cin>>s;
	system ("cls");
}
  while (s==1);
  getchar ();
  
}
float triangulo (float a,float b)
{
	float res;
	res=(a*b)/2;
	return res; 
}

float circulo (float a,float b)
{
	float resp;
	resp=a*(b*b);
	return resp ;
}

float romboide (float a,float b)
{
	float resul;
	resul=a-b;
	return resul ;
}
