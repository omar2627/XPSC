/*
PBL --> https://codeforces.com/contest/1858/problem/B
*/


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        ll n,m,d;cin>>n>>m>>d;
        vector<ll>v(m);
        for(int i=0; i<m; i++)cin>>v[i];
        ll sum=m;
        for(int i=0; i<m-1; i++)
        {
            ll cur=v[i];
            ll nxt=v[i+1];
            sum +=(nxt-cur-1)/d;
        }
        if(v[0]!=1)
        {
            sum +=(v[0]-2)/d;
            sum++;
        }
        sum +=(n-v[m-1])/d;
        vector<ll>con(m);
        ll ans=1e18;
        for(int i=1; i<m-1; i++)
        {
            ll prv=v[i-1];
            ll nxt=v[i+1];
            ll now=v[i];
            ll tmp=sum;
            tmp -=(now-prv-1)/d;
            tmp -=(nxt-now-1)/d;
            tmp--;
            tmp +=(nxt-prv-1)/d;
            con[i]=tmp;
            ans=min(ans,tmp);
        }
        {
          ll tmp=sum;
        if(v[0]!=1)
        {
            tmp -=(v[0]-2)/d;
            tmp -=1;
        }
        tmp--;
        tmp -=(v[1]-v[0]-1)/d;
        tmp +=(v[1]-2)/d;
        tmp++;
        ans=min(ans,tmp);
        con[0]=tmp;
        }

    {
        ll tmp=sum;
        tmp -=(n-v[m-1])/d;
        tmp--;
        tmp -=(v[m-1]-v[m-2]-1)/d;
        tmp +=(n-v[m-2])/d;
        ans=min(ans,tmp);
        con[m-1]=tmp;
    }
    cout<<ans<<" ";
    ll cnt=0;
    for(int i=0; i<m; i++)
    {
        cnt +=(con[i]==ans);
    }
    cout<<cnt<<endl;
    }
}
