/*almacenar 500 numeros en un vector , elevar al cuadrado cada valor almacenado en el vector, almacenar el resultado en otro vector.
imprimir el vector original y el vector resultante*/
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
	int m[500];
	int i,j;
	float cuadrado[20];
	cout<<"Ingresa 500 valores y los elevaremos al cuadrado\nValores\n";
	for (i=1;i<=500;i++)
	{
		cout<<i<<": ";
		cin>>m[i];
	}
	
	cout<<"\n\nValor \t Cuadrado\n";
	for (j=1;j<=500;j++) 
	{
	    cuadrado[j]=pow (m[j],2);
	    cout<<" "<<m[j]<<"\t   "<<cuadrado [j]<<"\n";     
	}
}    
