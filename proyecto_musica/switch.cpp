#include <iostream>
#include<string.h>
#include <windows.h>
using namespace std;
int main ()
{
	char sound1[]= "E:\LMLYD.wav";
	char sound2[]= "E:\meperteneces.wav";
	char sound3[]= "E:\RiverFlowsinYou.wav";
	char sound4[]= "E:\when.wav";
	char sound5[]= "E:\canon.wav"; 
	char sound6[]= "E:\pachamama.wav";
	char sound7[]= "E:\lol.wav";
	char sound8[]= "E:\crepusculo.wav";
	char sound9[]= "E:\piano.wav";
	char sound10[]= "E:\memo.wav";
	int op;
	string s;
	s="si";
		
	while (s=="Si" or s=="si" or s=="SI")
	{
		cout<<"¿Que cancion deseas reproducir?\n\n \3 1-Love Me Like You Do\n \3 2-You Belong With Me\n \3 3-River Flow Sin You\n \3 4-When I Look At You\n \3 5-Canon In D\n \3 6-Pachamama\n \3 7-For Elise\n \3 8-Bellas Lullaby\n \3 9-Bluestone Alley\n \3 10-El Vals Del Recuerdo\n\nCancion:";
	    cin>>op;
	    cout<<"\n";
	
        system ("cls");	
    	switch (op)
    	{
		    case 1:
			    cout<<"\n \3 Reproduciendo...\n *Love Me Like You Do\n";
		    	PlaySound((LPCSTR)sound1, NULL, SND_FILENAME | SND_ASYNC);
                system("pause");
                break;
            case 2:
			    cout<<"\n \3 Reproduciendo...\n *You Belong With Me\n";
			    PlaySound((LPCSTR)sound2, NULL, SND_FILENAME | SND_ASYNC);
                system("pause");
                break;
            case 3:
			    cout<<"\n \3 Reproduciendo...\n *River Flow Sin You\n";
			    PlaySound((LPCSTR)sound3, NULL, SND_FILENAME | SND_ASYNC);
                system("pause");
                break;
            case 4:
			    cout<<" \3 Reproduciendo...\n *When I Look At You\n";
			    PlaySound((LPCSTR)sound4, NULL, SND_FILENAME | SND_ASYNC);
                system("pause");
                break;
            case 5:
			    cout<<"\n \3 Reproduciendo...\n *Canon In D\n";
			    PlaySound((LPCSTR)sound5, NULL, SND_FILENAME | SND_ASYNC);
                system("pause");
                break;
            case 6:
			    cout<<" \3 Reproduciendo...\n *Pachamama\n";
			    PlaySound((LPCSTR)sound6, NULL, SND_FILENAME | SND_ASYNC);
                system("pause");
                break;
            case 7:
			    cout<<"\n \3 Reproduciendo...\n *For Elise\n";
			    PlaySound((LPCSTR)sound7, NULL, SND_FILENAME | SND_ASYNC);
                system("pause");
                break;
            case 8:
			    cout<<"\n \3 Reproduciendo...\n *Bellas Lullaby\n";
			    PlaySound((LPCSTR)sound8, NULL, SND_FILENAME | SND_ASYNC);
                system("pause");
                break;
            case 9:
			    cout<<"\n \3 Reproduciendo...\n *Bluestone Alley\n";
			    PlaySound((LPCSTR)sound9, NULL, SND_FILENAME | SND_ASYNC);
                system("pause");
                break;
            case 10:
			    cout<<"\n \3 Reproduciendo...\n *El Vals Del Recuerdo\n";
			    PlaySound((LPCSTR)sound10, NULL, SND_FILENAME | SND_ASYNC);
                system("pause");
                break;
			default:
            	cout<<"Opcion Erronea\n:";
            
	}
	cout<<"Desea elegir otra cancion\n \3 Si \n \3 No \n";
	cin>>s;
	system ("cls");
}
}
