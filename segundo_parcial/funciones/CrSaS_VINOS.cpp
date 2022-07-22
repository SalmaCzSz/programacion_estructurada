/*en una bodega se tiene informacion sobre las cantidades producidas de 5 tipos de vinos a lo largo de los ultimos 5 años
programa que mediante funciones y otras herramientas ya trabajadas calcular e imprimir:
a)total producido de cada tipo de vino
b)total producido de vino por año
c)año en que se produjo la mayor cantidad de litros de vino del tipo 2,imprime tambien la cantidad de litros
d)verificar si hubo algun año en el cual no se produjo el vino tipo 3,si existe dicho año imprimelo*/

#include<iostream>
using namespace std;
int main ()
{
	int v1[5],v2[5],v3[5],v4[5],v5[5],r[5];
	int i,j,k,l,m,n;
	int w,w2,w3,w4,w5;
	int t=0,t2=0,t3=0,t4=0,t5=0;
	int mayor=0,a=0,y=0;
	
	cout<<"Ingresa las cantidades en litros producidas por año del vino 1\n";
	for (i=1;i<=5;i++)
	{
		cout<<"Año "<<i<<":";
		cin>>v1[i];
		w=v1[i];
		t=t+w;
	}
	cout<<"\nEl total de litros producidos es "<<t;

	cout<<"\n\nIngresa las cantidades en litros producidas por año del vino 2\n";
	for (j=1;j<=5;j++)
	{
		cout<<"Año "<<j<<":";
		cin>>v2[j];
		w2=v2[j];
		t2=t2+w2;
		if (v2[j]>mayor)
		{
			mayor=v2[j];
			y=j;
		}
	}
	cout<<"La mayor cantidad de vinos fue de "<<mayor<<" en el año "<<y<<"\n";
	cout<<"El total de litros producidos es "<<t2<<"\n";
	
	cout<<"\n\nIngresa las cantidades en litros producidas por año del vino 3\n";
	for (k=1;k<=5;k++)
	{
		cout<<"Año "<<k<<":";
		cin>>v3[k];
		w3=v3[k];
		t3=t3+w3;
		if (v3[k]==0) a=k;
	}
	cout<<"\nEn El Año "<<a<<" No se produjo Vino\n";
	cout<<"El total de litros producidos es "<<t3<<"\n";
	
	cout<<"\n\nIngresa las cantidades en litros producidas por año del vino 4\n";
	for (l=1;l<=5;l++)
	{
		cout<<"Año "<<l<<":";
		cin>>v4[l];
		w4=v4[l];
		t4=t4+w4;
	}
	cout<<"El total de litros producidos es "<<t4<<"\n";
	
	cout<<"\n\nIngresa las cantidades en litros producidas por año del vino 5\n";
	for (m=1;m<=5;m++)
	{
		cout<<"Año "<<m<<":";
		cin>>v5[m];
		w5=v5[m];
		t5=t5+w5;
	}
	cout<<"El total de litros producidos es "<<t5<<"\n\n";
	
	for (n=1;n<=5;n++)
	{
		r[n]=v1[n]+v2[n]+v3[n]+v4[n]+v5[n];
		cout<<"El total de litros producidos de los 5 vinos en el año "<<n<<" es "<<r[n]<<"\n";
	}
}


