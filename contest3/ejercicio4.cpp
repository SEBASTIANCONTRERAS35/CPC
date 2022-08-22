#include<iostream>

#include<string.h>

using namespace std;

int main()
{
	int n;
	cin>>n;
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d>>e>>f;
	if(c<a&&e<a&&d<b&&f<b)
	{
		if(e-a!=f-b)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	else if(c<a&&e<a&&d>b&&f>b)
	{
		if(e-a!=f-b)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	else if(c>a&&e>a&&d<b&&f<b)
	{
		if(e-a!=f-b)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	else if(c>a&&e>a&&d>b&&f>b)
	{
		if(e-a!=f-b)
		cout<<"YES"<<endl;
		else
		cout<<"NO"<<endl;
	}
	else
	cout<<"NO"<<endl;
	return 0;
}
