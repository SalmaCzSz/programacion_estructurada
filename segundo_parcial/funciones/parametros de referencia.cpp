#include<iostream>
using namespace std;
void incrementar (int &);

int main (void)
{
	int var1=1;
	cout<<"El valor de la variable es "<<var1;
	incrementar (var1);
	return 0;
}
void incrementar (int &a)
{
	a=a+1;
	cout<<"\n\nEl valor de la variable es "<<a;
	return;
}

