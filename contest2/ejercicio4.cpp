#include <iostream>
using namespace std;
int contador;
	void intercambio(float &x,float &y){
	float aux;
	
	aux = x;
	x = y;
	y = aux;
	contador++;
}
void quickSort(int a[],int primero,int ultimo){
	int i,j,central;
	float pivote;
	
	central = (primero+ultimo) / 2;
	pivote = a[central];
	i = primero;
	j = ultimo;
	
	do{
		while(a[i] < pivote) i++;
		while(a[j] > pivote) j--;
		
		if(i<=j){
			intercambio(a[i],a[j]);
			i++;
			j--;
		}
	}while(i<=j);
	
	if(primero < j){
		quickSort(a,primero,j); //Ordenamos la sublista izquierda
	}
	if(i < ultimo){
		quickSort(a,i,ultimo); //Ordenamos la sublista derecha
	}	

	
	
}
int main (){

int n;
cin>>n;
	int array[n];
	
	
	quickSort(array,0,n-1);



}

