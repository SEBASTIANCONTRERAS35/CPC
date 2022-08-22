#include <iostream>
#include <vector>
#include<algorithm>
#include <stdlib.h>
using namespace std;

int main(){
	int contador=1,i;
	int n,a,b,c,suma=0;
	cin>>n;
	vector<int>cintas(3);
	cin>>a;
	cintas.push_back(a);
		cin>>b;
	cintas.push_back(b);
		cin>>c;
	cintas.push_back(c);

	sort(cintas.begin(),cintas.end());
	
	while (suma<n){
		suma+=cintas[i];
		i++;
		contador++;
	}
	system("clear");
	cout<<contador;

	
	
	return 0;
}
