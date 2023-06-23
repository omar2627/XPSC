/*
PBL  -->  https://www.codechef.com/problems/MOONSOON
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        long long n,m,h;
        cin>>n>>m>>h;
        ll cap[n];
        ll sup[m];
        for(ll i=0; i<n; i++)
        {
            cin>>cap[i];
        }
        for(ll i=0; i<m; i++)
        {
            cin>>sup[i];
        }

        sort(cap,cap+n,greater<ll>());
        sort(sup,sup+m,greater<ll>());
        ll ans=0;

        for(ll i=0,j=0; i<n && j<m; i++,j++)
        {
           if(cap[i]<sup[j]*h)
           {
               ans +=cap[i];
           }
           else if(cap[i]>sup[i]*h)
           {
               ans +=sup[j]*h;
           }
           else if(cap[i]==sup[j]*h)
           {
               ans +=sup[j]*h;
           }
        }
        cout<<ans<<endl;
        ans=0;
    }
}
