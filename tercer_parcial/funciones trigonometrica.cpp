/*angulo,funciones trigonometrica*/
#include<iostream>
#include<math.h>
#include<conio.h>
using namespace std;
int main()
{
	float r,a,s,seno,coseno,tangente;
	int op;
	
	do
	{
	    cout<<"Bienvenido\nElige una Funcion Trigonometrica\n\n1)Seno\n2)Coseno\n3)Tangente\n\nFuncion:" ;
	    cin>>op;
	
	    switch (op)
	    {
		    case 1:
			    cout<<"\nFuncion Trigonometrica Seno\nIngresa Angulo: ";
			    cin>>a;
			    cout<<"\n";
			    //primero se convierte a radianes
			    r=(a*3.1416);
			    seno=sin(r/180);
			    cout<<"Resultado: "<<seno;
			break;
		    
			case 2:
			    cout<<"\nFuncion Trigonometrica Coseno\nIngresa Angulo: ";
			    cin>>a;
			    cout<<"\n";
			    r=(a*3.1416);
			    coseno=cos(r/180);
			    cout<<"Resultado: "<<coseno;
			break;
			
			case 3:
			    cout<<"\nFuncion Trigonometrica Tangente\nIngresa Angulo: ";
			    cin>>a;
			    cout<<"\n";
			    r=(a*3.1416);
			    tangente=tan(r/180);
			    cout<<"Resultado: "<<tangente;
			break;
			default:
				cout<<"\nError";
	}
	    cout<<"\n\n¿Desea continuar?\n1)Si\t2)No\nOpcion: ";
	    cin>>s;
	    system ("cls");
    }
    while (s==1);
    cout<<"\n\nBonito Dia,Hasta Pronto";
    getchar ();
    return 0;
}
