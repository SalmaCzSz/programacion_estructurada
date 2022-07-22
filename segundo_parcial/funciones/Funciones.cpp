#include<iostream>
#include<math.h>
using namespace std;
int suma (int a, int b);
int resta(int a, int b);
int multiplicacion (int a, int b);
float divicion (float a, float b);
int main ()
{
	float num1,num2,respuesta;
	cout<<"Ingresa el primer numero\n";
	cin>>num1;
	cout<<"Ingresa el segundo numero\n";
	cin>>num2;
	respuesta=suma(num1,num2);//tiene que decir con que parametros
	cout<<"La suma de "<<num1<<" && "<<num2<<" es igual a "<<respuesta<<"\n";
	respuesta=resta(num1,num2);//tiene que decir con que parametros
	cout<<"La resta de "<<num1<<" && "<<num2<<" es igual a "<<respuesta<<"\n";
	respuesta=multiplicacion(num1,num2);//tiene que decir con que parametros
	cout<<"La multiplicacion de "<<num1<<" && "<<num2<<" es igual a "<<respuesta<<"\n";
	respuesta=divicion(num1,num2);//tiene que decir con que parametros
	cout<<"La divicion de "<<num1<<" && "<<num2<<" es igual a "<<respuesta<<"\n";
}
	int suma(int a,int b)
	{
		int res;
		res=a+b;
		return res;
	}
	
	int resta(int a,int b)
	{
		int res;
		res=a-b;
		return res;
	}
	int multiplicacion(int a,int b)
	{
		int res;
		res=a*b;
		return res;
	}
	float divicion (float a,float b)
	{
		float res;
		res=a/b;
		return res;
	}
