/*UN FABRICANTE HA SIDO SOMETIDO A UN PROGRAMA DE CONTROL DE CONTAMINACION PARA LO CUAL SE EFECTUA UNA REVISION DE LOS PUNTOS IMECA
GENERADOS POR LA FABRICA.eL PROGRAMA DE CONTROL Y CONTAMINACION CONSISTE EN MEDIR LOS PUNTOS IMECA QUE EMITE LA FABRICA EN 5 DIAS DE UNA SEMANA
SI EL PROMEDIO ES SUPERIOR A 170 PUNTOS ENTONCES TENDRA LA SANCION DE PARAR SU PRODUCCION POR UNA SEMANA Y UNA MULTA DEL 50% DE LAS GANANCIAS DIARIAS
CUANDO NO SE TIENE LA PRODUCCION.
SI EL PROMEDIO ES DE 170 O MENOR ENTONCES NO TENDRAN SANCION NI MULTA.
EL DUEÑO DE LA FABRICA DESEA SABER CUANTO DINERO PERDERA DEPUES DE SER SOMETIDO A LA REVISION.
Y ADEMAS DESEA SABER CUANTOS PUNTOS IMECA TUVO EL MIERCOLES Y EL VIERNES*/
#include<iostream>
#include<math.h>
#include<string.h>
using namespace std;
char *n;
int main ()
{
	char introduccion[]= "Bienvenido Al Programa De Control De Puntos IMECA\n";
	int i,puntos[5],ganancias [5];
	int prom=0,sum=0,tot=0,multa;
	
	cout<<introduccion<<"\Ingrese los siguientes datos:\n";
	
	for (i=1;i<=5;i++)
	{
		cout<<"\nDia "<<i<<"\nPuntos Imeca: ";
		cin>>puntos[i];
		sum=sum+puntos[i];
		prom=sum/i;
		cout<<"\nGanancias: $";
		cin>>ganancias[i];
		tot=tot+ganancias[i];	
	}
	cout<<"\n\nPuntos IMECA: "<<sum;
	cout<<"\nPromedio    : "<<prom;
	cout<<"\nGanancias   : $"<<tot;
	if(prom>=170)
	{
		multa=tot/2;
		cout<<"\nMulta 50%: $"<<multa;
	}
	cout<<"\n\nPuntos IMECA dia Miercoles :"<<puntos[3]<<"\nPuntos IMECA dia Viernes :"<<puntos[5];
}
