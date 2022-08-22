#include <iostream>
#include <string.h>
using namespace std;

int main (){
	int longitud,n=0;
	cin>>n;
	for (int i=0;i<=n;i++){
		char cadenas[100];
		cin.getline(cadenas,100,'\n');
		cout<<endl;
		longitud=strlen(cadenas);
		if(longitud>10){
			system("clear");
		cout<<cadenas[0]<<longitud-2<<cadenas[longitud-1]<<endl;;
}
else cout<<cadenas;
	}
	
	
	
	return 0;
}
