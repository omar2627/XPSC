/*
PBL --> https://codeforces.com/contest/1669/problem/C
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v(n+1);
        for(int i=1; i<=n; i++)
        {
            cin>>v[i];
        }
        int o1=0,e1=0,o2=0,e2=0;
for(int i=1; i<=n; i++)
{
    if(i%2==0)
    {
        if(v[i]%2==0)
        {
            o1++;
        }
        else
        {
            e1++;
        }
    }
    else
    {
        if(v[i]%2==0)
        {
            o2++;
        }
        else
        {
            e2++;
        }
    }
}
if(o1>0 && e1>0 || o2>0 && e2>0 )
{
    cout<<"NO"<<endl;
}
else
{
    cout<<"YES"<<endl;
}
    }
}
