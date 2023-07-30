/*
PBL --> https://codeforces.com/contest/1851/problem/A
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
        long long n,m,k,h;
        cin>>n>>m>>k>>h;
        vector<ll>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int ans=0;
        for(int i=0; i<n; i++)
        {
           int a=0;
           for(int x=1; x<=m; x++)
           {
               for(int y=x+1; y<=m; y++)
               {
                   if(x==y)
                   {
                       continue;
                   }
                   ll dif=abs(v[i]-h);
                   ll Dif=y-x;
                   Dif=Dif*k;
                   if(dif==Dif)
                   {
                       a=1;
                   }
               }
           }
           if(a==1)
           {
               ans++;
               a=0;
           }
        }
        cout<<ans<<endl;
    }
}
