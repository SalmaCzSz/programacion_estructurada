#include<iostream>
#include<stdio.h>
using namespace std;




int main(){
	
int i,ubicado=0,vec[1000],n,nx,e,num,TAM,temp,j,mto,dd=0,mtb;

cout<<"cantidad de numeros que se van a ingresar\n ";
cin>>TAM;
for(i=0;i<TAM;i++){

cout<<"[Numero] "<<i<<":";
cin>>n;
}
cout<<"\t\tque metodo de ordenamiento deseas utilizar?\n";

cout<<"\t\t\t1.-Insersion\n";
cout<<"\t\t\t2.-Seleccion\n";
cin>>mto;
if(mto==1){
	for (i=1; i<TAM; i++){
		 temp = vec[i];
		 j = i - 1;
		 while ( (vec[j] > temp) && (j >= 0) )
		vec[j+1] = vec[j];
		j--;
		vec[j+1] = temp;
	
		cout<<"los numeros ordenados son: ";
		
	
		cout<<vec[n];" ";
		}
	
}
}
