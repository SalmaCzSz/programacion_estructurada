#include<iostream>
#include<math.h>
#include<conio.h>
#include<stdio.h>

using namespace std;

int main()
	
{
    int op;
    int s;
	float a,b,r; 
    
	do
    {
	cout<<"ingresa dos numeros\n";
    cin>>a;
    cin>>b;
	
    cout<<"Que operacion deseas realizar\n 1)Suma\n 2)Resta\n 3)Multiplicacion\n 4)Divicion\n 5)Suma del cuadrado\n 6)Raiz Cuadrada del 1 numero \n 7)Raiz cuadrada del 2 numero";
	cin>>op;
	
	
	switch (op)
	{

	case 1:
		cout<<"Opcion 1: \n";
			r=a+b;
	 	cout<<a<<"+"<<b<<"="<<r<<"\n";
		break;   //break anula las opciones que no son elegidas//
	case 2:
	    cout<<"Opcion 2: \n";	
	    	r=a-b;
	 	cout<<a<<"-"<<b<<"="<<r<<"\n";
	    break;
	case 3:
		cout<<"Opcion 3: \n";
			r=a*b;
	 	cout<<a<<"*"<<b<<"="<<r<<"\n";
	    break;
	case 4:
		cout<<"Opcion 4: \n";
	    r=a/b;
		cout<<a<<"/"<<b<<"="<<r<<"\n";
	 	break;
	case 5:
		cout<<"Opcion 5: \n";
		r=pow (a,2)+pow (b,2);
	 	cout<<a<<"^"<<b<<"="<<r<<"\n";
	 	break;
	case 6:
		cout<<"Opcion 6: \n";
		r=sqrt(a);
		cout<<"Raiz cuadrada de "<<a<<" es igual a "<<r<<"\n";
	 	break;
	case 7:
	 	cout<<"Opcion 7: \n";
		r=sqrt(b);
		cout<<"Raiz cuadrada de "<<b<<" es igual a "<<r<<"\n";
	 	break;
	    default:
	    	cout<<"opcion no valida";
	    	
    }
	cout<<"Desea realizar otra operacion\n1)Si \n2)No \n";
	cin>>s;
	system ("cls");
	}
	while (s == 1);
  getchar();
   return 0;
   
}
