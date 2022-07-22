#include<iostream>
using namespace std;
int main()
{
	int op;
	cout<<"Elige una opcion ";
	cin>>op;
	
	
	switch (op)
	{
    case 1:
		cout<<"Opcion 1: ";
		break;   //break anula las opciones que no son elegidas//
	case 2:
	    cout<<"Opcion 2: ";	
	    break;
	case 3:
		cout<<"Opcion 3: ";
	    break;
	    default:
	    	cout<<"opcion no valida";

    }			
}
