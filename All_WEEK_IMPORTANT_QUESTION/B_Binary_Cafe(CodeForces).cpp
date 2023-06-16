/*
problem link  --> https://codeforces.com/contest/1840/problem/B

*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,k;
        cin>>n>>k;
        k=min(62,(int)k);
        ll ans=min((n+1ll),(1ll<<k));
        cout<<ans<<endl;
    }
}
