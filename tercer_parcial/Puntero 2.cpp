#include<iostream>
#include<conio.h>
using namespace std;

void(*funcion)();
void saludo();
main()
{
	funcion=saludo;
	saludo();
	funcion();
	
}
void saludo()
{
cout<<"\nsaludos desde el cecyt 14 \n";	
}
