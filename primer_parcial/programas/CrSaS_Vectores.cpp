/*Vectores*/
#include<iostream>
using namespace std;
int main (void)
{
	int n[5];
	int i;
	
	for (i=1;i<=5;i++)
	{
		n[i-1]=i;
	}
	
	for(i=0;i<=4;i++)
	{
	  cout<<"La posicion "<<i<<" es el dia "<<n[i]<<endl;
	}
}
