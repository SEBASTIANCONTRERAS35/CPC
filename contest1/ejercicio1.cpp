#include <iostream>
using namespace std;

int main (){
	

int n,m,a;
cin>>n>>m>>a;
long long l1=(n%a==0)?n/a:n/a+1;
long long l2=(m%a==0)?m/a:m/a+1;
cout<<l1*l2<<endl;
	return 0;
}
