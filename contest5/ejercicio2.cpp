#include <iostream>
#include <string.h>
using namespace std;

int main (){
	char cadena[100],cadenaFinal[100],letra[100];
	cin.getline(cadena,100,'\n');
	strlwr(cadena);
	for (int i=0;i<strlen(cadena);i++){
		if (cadena[i]=='a'||cadena[i]=='e'||cadena[i]=='i'||cadena[i]=='o'||cadena[i]=='u'){
			cout<<"";
		}
		else {strcat(cadenaFinal,".");
		copy
		strcat(cadenaFinal,letra);
		}
	}
	cout<<cadenaFinal;
	
	
	return 0;
}
