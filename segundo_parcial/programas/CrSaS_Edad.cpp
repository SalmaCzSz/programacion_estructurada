/*uso de string o cadenas
Programa que pide edad y determine si puede o no votar*/
#include<iostream>
#include<string.h> //es indispensable colocar esta cabecera cuando trabajemos con cadenas (caracteres)
using namespace std;
int main ()
{
	int a;
	string z; //el tipo de dato para cadenas es string
	z="si"; //siempre se inicializa string con "si" para el ciclo while
	while (z=="si" or z=="Si" or z=="SI")
	{
		cout<<"Ingresa tu edad ";
		cin>>a;
		if (a>=18)
		{
			cout<<"Ya Puedes Votar \n"; 
		}
		else
		{
			cout<<"No Puedes Votar \n";
		}
		cout<<"Si deseas continuar escribe 'si' \nSi no deseas continuar escribe 'no' \n";
		cin>>z;
	}
	
}
