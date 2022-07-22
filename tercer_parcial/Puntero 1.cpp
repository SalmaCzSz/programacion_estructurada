#include<iostream>
#include<conio.h>

using namespace std;

char *caracter;
int*entero;
float*flotante;
short*entero_corto;
long *entero_largo;
bool *boleano;


main()
{
	
	cout<<"\n\n punteros \n\n";
	int valor=500;
	entero=&valor;
	cout<<entero<<"\t";
	cout<<&valor<<"\t";
	cout<<*entero<<"\t";
	cout<<valor;
}
