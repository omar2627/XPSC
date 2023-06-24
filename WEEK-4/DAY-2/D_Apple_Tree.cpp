/*
PBL --> https://codeforces.com/contest/1843/problem/D
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long int ll;
ll cs=1;
vector<ll>v[200005];
ll leaf[200005];
bool visited[200005];
ll leaf_count(ll src)
{
    visited[src]=true;
    ll ans=0;
    bool l=true;
    for(ll i=0; i<v[src].size(); i++)
    {
        if(!visited[v[src][i]])
        {
            l=false;
            ans +=leaf_count(v[src][i]);
        }
    }
    if(l)
    {
        return leaf[src]=1;
    }
    else
    {
        return leaf[src]=ans;
    }
}
void solve()
{
    ll n;
    cin>>n;
    ll e=n-1;
    memset(visited, false, sizeof(visited));
    memset(leaf,0,sizeof(leaf));
    while(e--)
    {
        ll node1,node2;
        cin>>node1>>node2;
        v[node1].push_back(node2);
        v[node2].push_back(node1);
    }
    ll q;
    leaf_count(1);
    cin>>q;
    while(q--)
    {
        ll x,y;
        cin>>x>>y;
        cout<<leaf[x] * leaf[y]<<endl;
    }
    for(ll i=1; i<=n; i++)
    {
        v[i].clear();
    }
}
int main()
{
    ll t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}
