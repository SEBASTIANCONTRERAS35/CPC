#include<iostream>
using namespace std;
long long a[100010];
int main()
{
    int n;
    long long maxn=-1;
    while(cin>>n)
    {
	    maxn=-1;
        int i,flag=0;
        long long cnt=1;
        for(i=0; i<n; i++)
            cin>>a[i];
        for(i=0; i<n-1; i++)
        {
            if(a[i]<=a[i+1])
                cnt++;
            else
                cnt=1;
            if(cnt>maxn)
            {
              maxn=cnt;
        }
            cout<<maxn;
    }
}
    return 0;
}

