#include <iostream>
using namespace std;

int main(){
	long long test,n;
	cin>>test;
	int x,y,i;
	for ( i=0;i<=test;i++){
		cin>>n;
			x=n/2020;
			y=n/2021;
			
	for(int i=0;i<=x;i++){
		for(int j=0;j<=y;j++){
			if(i*2020+j*2021==n){
				cout<<"YES"<<endl;
			}
				else cout<<"NO"<<endl;
				
		}
		
	}
		
	}
	
	
	
	return 0;
}
