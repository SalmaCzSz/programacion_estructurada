#include<iostream>
using namespace std;
int intercambia ( int *,int *);
int main()
{
	int a=7,b=8;
	cout<<"a="<<a<<" b="<<b<<"\n";
	intercambia(&a,&b);
	cout<<"a="<<a<<" b="<<b<<"\n";
}
int intercambia ( int *x,int *y)
{
	int z;
	z=*x;
	*x=*y;
	*y=z;
}
