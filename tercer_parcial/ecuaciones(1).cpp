/*desarrolla el programa que tenga 3 funciones una que muertre de manera resumida el programa 
y q muestre la solucion RC1 y RC2*/
#include<iostream>
#include<math.h>
using namespace std;
int x1 (int a,int b,int c);
int x2 (int a,int b,int c);

int main ()
{
		int a,b,c,r1,r2,s;
	    cout<<"ingrese valor a;";
	    cin>>a;
	    cout<<"ingrese valor b;";
	    cin>>b;
	    cout<<"ingrese valor c;";
	    cin>>c;
	    r1= x1 (a,b,c);
	    r2= x2 (a,b,c);
		if (r1<=0 or r2<=0)
		{
			cout<<"\nError\n";
		}
		else
		{
			cout<<"\nX1:"<<r1<<"\n";
	        cout<<"\nX2:"<<r2<<"\n";
		}
	}

int x1(int a,int b,int c)
{
	int res;
	res=(-b+sqrt(b*b-4.0*a*c))/2.0/a;
	return res;
}

int x2 (int a,int b,int c)
{
	int resultado;
	resultado=(-b-sqrt(b*b-4.0*a*c))/2.0/a;
	return resultado;
}

/* 1,-5,6*/
