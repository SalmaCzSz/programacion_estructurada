/*Programa que de 3 regiones (Norte,CentroySur) calcula el promedio mensuales de lluvias en las tres regiones
promedio anual de la region centro
mes y registro con menor lluvia en la region sur
region con mayor lluvia
de la region centro las lluvias mayores al promedio*/

#include<iostream>
using namespace std;
int main ()
{
	int n[12];
	int c[12];
	int s[12]; //region norte centro y sur
	int z;//contador
	float menor=100;
	float p,q,r,prom; //promedio
	float sn,sc,ss;
		cout<<"Bienvenido al Centro Metereologico de Australia\n\n";
	    cout<<"Zona Norte\n";
			for(z=1;z<=12;z++)
			{
			    cout<<"Ingresa el promedio de lluvias del mes "<<z<<"\n";
			    cin>>n[z];
			    sn=sn+n[z];
			    p=sn/12;
			}
			cout<<"El promedio anual de lluvias de la Zona Norte es de "<<p<<"\n\n";
		
			
		cout<<"Zona Centro\n";
			for(z=1;z<=12;z++)
			{
			    cout<<"Ingresa el promedio de lluvias del mes "<<z<<"\n";
			    cin>>c[z];
			    sc=sc+c[z];
			    q=sc/12;
			}
			cout<<"El promedio anual de lluvias de la Zona Centro es de "<<q<<"\n\n";
			
		cout<<"Zona Sur\n";
			for(z=1;z<=12;z++)
			{
			    cout<<"Ingresa el promedio de lluvias del mes "<<z<<"\n";
			    cin>>s[z];
			    ss=ss+s[z];
			    r=ss/12;
			    
			    if (s[z]<menor) menor=s[z];
			}
			cout<<"El promedio anual de lluvias de la Zona Sur es de "<<r;
			cout<<"\nEl registro menor de lluvias fue de "<<menor<<" lluvia(s)\n\n";
			
			prom=p+q+r/3;
			if (p>q && p>r)
			{
				cout<<"La Zona Norte tiene mayor Promedio de lluvias";
			}
			else
			{
				if (q>p && p>r)
				{
					cout<<"La Zona Centro tiene mayor Promedio de lluvias";
				}
				else
				{
					cout<<"La Zona Sur tiene mayor promedio de lluvias";
				}
			}

}
