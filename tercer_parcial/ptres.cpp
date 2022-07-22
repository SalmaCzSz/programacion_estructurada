/*.-Programa que solicite 2 numeros enteros "a" y "b" donde "b" es un numero positivo mayor de 0,
donde se generara la ecuacion x=a^b (no usar la cabecera math.h)*/
#include<iostream>
#include<string.h>
using namespace std;
int main ()
{
	int b,p,i,r=1;
	string s;
	s="si";
	
	cout<<"Bienvenido\n";
	while (s=="Si" or s=="si" or s=="SI")
	{
		cout<<"\nIngresa Los Siguientes Datos:\nBase: ";
	    cin>>b;
	    cout<<"\nPotencia: ";
	    cin>>p;
	      
	    for (i=0;i<p;i++)
	    {
		    r=r*b;
     	}
    
		cout<<"\n "<<b<<"^"<<p<<" = "<<r;
		cout<<"\n\n¿Deseas ingresar mas numeros?\nRespuesta: ";
		cin>>s;
		system ("cls");
		r=1;
	}
	
}
