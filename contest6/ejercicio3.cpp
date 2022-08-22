#include <iostream>
using namespace std;

void justo(int &n1,int &n2,int &n3,int &n4){
	int mayor1,mayor2,perdio1,perdio2;
	
	if (n1==n2||n1==n3||n1==n4||n2==n3||n2==n4||n3==n4){
		return ;
	}
	else {
		if (n1<n2){
			mayor1=n2;
			perdio1=n1;
		}
		else if(n1>n2){
			mayor1=n1;
			perdio1=n2;
		}
		if(n3<n4){
			mayor2=n4;
			perdio2=n3;
		}
		else if (n4<n3){
			mayor2=n3;
			perdio2=n4;
		}
		if (mayor1<perdio2||mayor2<perdio1){
			system("clear");
			cout<<endl<<"NO"<<endl;
		}
		else{
		system("clear");
			cout<<endl<<"YES"<<endl;
		}
	}
}

int main (){
	long n;
	int s1,s2,s3,s4;
	cin>>n;
	for (int i=0;i<n;i++){
		cin>>s1>>s2>>s3>>s4;
		justo(s1,s2,s3,s4);
		
	}
	
	
	
	
	return 0;
}
