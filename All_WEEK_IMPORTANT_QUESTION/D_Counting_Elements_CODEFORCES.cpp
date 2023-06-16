/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/D

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,ans=0;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int frq[1001];
    for(int i=0; i<=1005; i++)
    {
        frq[i]=0;
    }
    for(int i=0; i<n; i++)
    {
        frq[a[i]]++;
    }
     for(int i=0; i<=1000; i++)
     {
         if(frq[i]>0 && frq[i+1]>0)
         {
             ans +=frq[i];
         }
     }
     cout<<ans;
}
