#include <iostream>
using namespace std;

int main (){
	
	
	int n,ans=0,s;
	cin>>n;
	int a[n];
	for (int i=0;i<n;i++){
		cin>>a[i];
		
		}
	
		for (int i=0;i<n;i++){
			s=a[i];
			ans=max(ans,s);
			for (int j=i+1;j<n;j++){
				s=s^a[j];
				ans=max(ans,s);
			}
		}
		cout<<ans<<endl;
	
	return 0;
}
