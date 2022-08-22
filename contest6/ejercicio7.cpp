#include<iostream>
#include<algorithm>
#include<string>
using namespace std;

 
int main()
{
	string a;
	int n,i,l,r;
	cin>>a;
	n=a.length();
	if(n%2==0)
		l=r=n/2-1;
	else
		l=r=n/2;
	while(1)
	{
		if(l==r)
			cout<<a[l];
		else 
		{
			if(r<n)
				cout<<a[r];
			if(l>=0)
				cout<<a[l];
		}
		l--;
		r++;
		if(r>=n)
			break;
	}
	cout<<endl;
	return 0;
}
