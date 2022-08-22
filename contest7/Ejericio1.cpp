#include <iostream>


using namespace std;

int main (){
			int matriz [100][100],n=0,test,columnas,k=1,filas,sum;
		
	cin>>test;
	
	do{
	
		cin>>filas>>columnas;
			for (int i=0;i<filas;i++){
			
			for (int j=0;j<columnas;j++){
			
		matriz[i][j]=k;
			k++;
				
			}
			
		}
	
	sum=0;
			for (int i=0;i<filas;i++){
			
			for (int j=0;j<columnas;j++){
			
			sum+=matriz[i][j];
				
			}
			
		}
	
		cout<<sum;

		n++;
	} while(n<test);
	

return 0;
}
