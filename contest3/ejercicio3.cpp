#include<iostream>
#include<vector>
#include<string.h>
using namespace std;
long long maxx,deep;
vector<long>g[100000];
long long vis[10000],a[100000];
void dfs(int x)
{
    for(int i=0;i<g[x].size();i++)
    {
        int u=g[x][i];
        if(!vis[u])
        {
            vis[u]=1;
            deep++;
            dfs(u);
            if(deep>maxx) maxx=deep;
            deep--;
        }
    }
}
int main()
{
    long long n;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==-1) continue;
        g[a[i]].push_back(i);
    }
    maxx=1;deep=1;
    memset(vis,0,sizeof vis);
    for(int i=1;i<=n;i++)
    {
        if(a[i]==-1&&!vis[i])
        {
            vis[i]=1;
            dfs(i);
        }
    }
    cout<<maxx<<endl;
}
