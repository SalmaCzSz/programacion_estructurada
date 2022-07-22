/*llenar 2 vectores a&b de 45 elementos cada uno ,sumar el elemento 1 del vector a con el vector b
almacenarlo en un vector c,e imprimirlo*/
#include<iostream>
using namespace std;
int main ()
{
	int a[45],b[45],c[45];
	int i,j,k;
	
	cout<<"Ingresa 45 Numeros\n";
	
	for (i=1;i<=45;i++)
	{
		cout<<"Numero "<<i<<": ";
		cin>>a[i];
		cout<<" \n";
	}
	
	cout<<"\nIngresa 45 Numeros\n";
	for (j=1;j<=45;j++)
	{
		cout<<"Numero "<<j<<": ";
		cin>>b[j];
		cout<<" \n";
	}
	
	cout<<"\nTabla A     Tabla B     Resultado\n";
	for (k=1;k<=45;k++)
	{
	    c[k]=a[k]+b[k];
		cout<<"   "<<a[k]<<"    \t"<<b[k]<<"   \t   "<<c[k]<<"\n";	
	}	
}
