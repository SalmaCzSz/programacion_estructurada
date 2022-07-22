#include <iostream>
#define SIZE 10
void selection(int [],int,int);
//void selection(int [],int,int);
main()

{
//int a[SIZE]={50, 10, 90, 12, 80, 15, 5, 16};
int a[SIZE]={29,37,68,15,41,333,1144,8,10,2};
int i;
int j;

for(j=0;j<SIZE;j++)
selection(a,j,SIZE);
//minimum(a,1,SIZE);

for(i=0;i<SIZE;i++)
printf("%d ",a[i]);

}

void selection(int a[],int inicio,int tamano)
{

int lowgrade=10000;

int i,last;

for(i=inicio;i<tamano;i++)
if(a[i]<lowgrade){
lowgrade=a[i];
last=i;

}
//printf("%d ",last);

a[last]=a[0+inicio];
a[inicio]=lowgrade;

}
