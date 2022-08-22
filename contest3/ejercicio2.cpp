#include<iostream>
using namespace std;

int main(){
long long du[110];
long long mapp[110][110];
long long gg[110];
    int x,y,z,i,t,q;
   cin>>x>>q;
    while(q--)
    {
        long long u,v;
        cin>>u>>v;
        du[u]++;
        du[v]++;
        mapp[u][v]=mapp[v][u]=1;
    }
    long long ans=0;
    while(1)
    {
        int ji=0;
        for(i=1;i<=x;i++)
        {
            if(du[i]==1)
            gg[ji++]=i;
        }
        for(i=0;i<ji;i++)
        {
            for(t=1;t<=x;t++)
            {
                if(mapp[gg[i]][t])
                {
                    mapp[gg[i]][t]=mapp[t][gg[i]]=0;
                    du[gg[i]]--;
                    du[t]--;
                }
            }
        }
        if(!ji)
        break;
        ans++;
    }
    cout<<ans<<endl;
    return 0;
}
