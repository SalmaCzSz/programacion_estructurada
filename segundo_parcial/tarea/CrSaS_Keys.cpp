/*Keys Programa que segun la temperatura determine el deporte apropiado a practicar*/
#include<iostream>
using namespace std;
int main()
{
	int c;
	cout<<"Ingresa Temperaturaa Del Dia\n";
	cin>>c;
	
	if (c>25)
	{
		cout<<"Exelente Clima Para Nadar";
	}
	else
	{
		if (c<25 && c>21)
		{
			cout<<"Exelente Clima Para Practicar Tennis";
		}
		else
		{
			if (c<=20 && c>=15)
			{
				cout<<"Exelente Clima Para Golf";
			}
			else
			{
				if(c<15)
				{
					cout<<"Exelente Clima Para Una Caminata";
				}
			}
		}
	}
}
