/*VOTACION DE 4 CANDIDATOS ,LOS CUALES TENDRAN LOS NUMEROS 1,2,3 Y 4 Y LOS VOTANTES LLEGARAN EN FORMA ALEATORIA SE DESEA CONOCER
EL CANDIDATO GANADOR ,CUANTOS VOTOS TUVO Y QUE PORCENTAJE REPRESENTO (UTILIZANDO MATRICES)*/
#include<iostream>
using namespace std;
int main ()

{
	int v1=0,v2=0,v3=0,v4=0;
	int votos=0,s;
	int op;
	
	do
	{
	cout<<"¿Cual candidato eliges?\nCandidato 1\nCandidato 2\nCandidato 3\nCandidato 4\nCandidato: ";
	cin>>op;
	
	switch (op)
	{
		case 1:
		cout<<"\nCandidato 1\nGracias por tu voto";
		v1=v1+1;
		break;
		case 2:
			cout<<"\nCandidato 2\nGracias por tu voto";
		    v2=v2+1;
	    break;
		case 3:
			cout<<"\nCandidato 3\nGracias por tu voto";
		    v3=v3+1;
		break;
		case 4:
			cout<<"\nCandidato 4\nGracias por tu voto";
		    v4=v4+1;
		break;
		default:
			cout<<"\nOpcion erronea\n";
	}
	
	cout<<"\n\n¿Hay mas votantes?\n1)Si\n2)No\n";
	cin>>s;
	system ("cls");
	votos=v1+v2+v3+v4;
	
    }
    
    while (s==1);
    
	cout<<"Votos\nCandidato 1: "<<v1<<"\n";
    cout<<"\nCandidato 2: "<<v2<<"\n";
    cout<<"\nCandidato 3: "<<v3<<"\n";
    cout<<"\nCandidato 4: "<<v4<<"\n";
    cout<<"\nTotal de votos "<<votos<<"\n";


	if (v1>v2 or v1>v3 or v1>v4)
	{
		cout<<"\nEl gandor es el Candidato 1";
	}
	else
	{
		if(v2>v1 or v2>v3 or v2>v4)
	   {
		    cout<<"\nEl gandor es el Candidato 2";    
 	   }
		   else
		   {
		   if (v3>v1 or v3>v2 or v3>v4)
	       {
	            cout<<"\nEl gandor es el Candidato 3";	
	       }
		        else 
	            {
		            if (v4>v1 or v4>v2 or v4>v3)
					{
						cout<<"\nEl gandor es el Candidato 4";
					}
	            }
           }
    }
}

