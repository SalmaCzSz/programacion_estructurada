#include <iostream>
#include <conio.h>
using namespace std;

char *caracter;
int *entero;
float *flotante;
short *entero_corto;
long *entero_largo;
bool *boleano;

main()
{
	char nombre[]="Mario";
	cout<<nombre<<"\t";
	cout<<nombre[3]<<"\t";
	caracter=nombre;
	cout<<caracter<<"\t";
	cout<<caracter[3+1];
	
}
