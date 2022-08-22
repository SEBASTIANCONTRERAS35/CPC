#include<iostream>
#include<set>
using namespace std;

int main()
{	
	set<int>s,t;
    int a[100005];
    int n,i,m,j,k;
    bool flag,flag2;
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>a[i];
    }
    flag=false;
	flag2=false;
    for(i=1;i<=n;i++)
    {
        t.insert(a[i]);
        if(t.size()==m)
        {
            flag=true;
            j=i;
            break;
        }
    }
    for(i=j;i>=1;i--)
    {
        s.insert(a[i]);
        if(s.size()==m)
        {
            flag2=true;
            k=i;
            break;
        }
    }
    if(flag==true&&flag2==true)
    cout<<k<<" "<<j<<endl;
    else cout<<-1<<" "<<-1<<endl;
    return 0;
}
