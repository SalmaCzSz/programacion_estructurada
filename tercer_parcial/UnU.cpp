/*en una empresa se requiere un programa que determine el estimulo economico a obtener por un empleado, por el promedio de ventas realizado al año
el programa debe capturar e imprimir: nombre de empleado,departamento, ventas realizadas (12 meses),
debera calcular el promedio de ventas anuales y determinar el estimulo economico que le corresponde deacuerdo a lo siguiente:
hasta 50 mil                        no hay estimulo
mayor a 50mil y hasta 450mil           10mil
mayor a 450mil                         25mil
debera imprimir en pantalla: nombre de empleado ,departamento y monto de estimulo
a)funcion vacia que imprima el obetivo del programa
b)funcion con parametros que obtega el nombre del empleado y su categoria
c)funcion con parametros que calcule las ventas de cada mes (utilizar arreglos) y calcule el costo de ventas
d)funcion con parametrosque determine el estimulo economico
e)funcion con parametros que imprima el nombre de empleado y departamento  y estimulo correspondiente*/
#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;
char *objetivo;
float promedio (float sum,int i);
int main ()
{
	string empleado;
	string r;
	r="si";
	char ob[]="\n\nObjetivo:\n \6 Determinar el estimulo economico que recibira el empleado,\n en base a su promedio de ventas\n";
    int dpt;
	int i,ventas [12];
	float prom=0,suma=0;
	
	do
	{	
	    cout<<"\3 \2 \3 \2 \3 \2 \3 \2 \3 \2 \3 \2 \3 Bienvenido \3 \2 \3 \2 \3 \2 \3 \2 \3 \2 \3 \2 \3 \n"<<ob<<"\nIngresa los siguientes datos:\n \3 Nombre: ";
	    cin>>empleado;
	    cout<<"\n \3 Departamento\n  \4 1-Unidad De Contaduria \n  \4 2-Unidad De Informatica \n  \4 3-Unidad De Mercadotecnia \n Departamento: ";
	    cin>>dpt;
	    cout<<"\n \3 Ventas realizadas por mes:";
    	for (i=1;i<=5;i++)
	    {
		    cout<<"\n  \6 Mes "<<i<<": $";
		    cin>>ventas [i];
		    suma=suma+ventas[i];
            prom=promedio (suma,i);
        }
        
	    if (prom<=50000)
	    {
		    cout<<"\n \3 Empleado: "<<empleado<<"\n \3 Departamento: "<<dpt<<"\n \3 Promedio: $"<<prom<<"\n \3 Sin Estimulo Economico UnU";
	    }
	    else
	    {
		    if (prom>50000 and prom<=450000)
		    {
			    cout<<"\n \3 Empleado: "<<empleado<<"\n \3 Departamento: "<<dpt<<"\n \3 Promedio: $"<<prom<<"\n \3 Estimulo: $10,000";
		    }
		    else
		    {
			   if (prom>450000)
		       {
			        cout<<"\n \3 Empleado: "<<empleado<<"\n \3 Departamento: "<<dpt<<"\n \3 Promedio: $"<<prom<<"\n Estimulo: $25,000";
		       }
		    }
	    }
		
	    cout<<"\n\n ¿Hay otro empleado?\n";
	    cin>>r;
		system ("cls");
    }
    while (r=="Si" or r=="si" or r=="SI");
    getchar ();
    return 0;
}

float promedio (float sum, int i)
{
	float p;
	p=sum/i;
	return p;
}
