/*Programa para determinar el numero de empleados con sueldo superior al promedio*/
#include<iostream>
using namespace std;
int main()

{
   int c;
   int d;
   int s[70];
   int as=0;
   int cp=0;
   float prom;

    for (c=1;c<=70;c++)
    {
	cout<<"\n Ingresa sueldo "<<c<<" ";
	cin>>s[c];
	as=as+s[c];
   }
   prom=as/70;
    cout<<"\n El sueldo promedio es de $"<<prom;
    
    for (d=1;d<=70;d++)
	{
		if(s[d]>prom)
		{

		cp=cp+1;
 	}
 }
	cout<<"\n El numero de empleados con sueldo mayor al promedio es:"<<cp;
}




