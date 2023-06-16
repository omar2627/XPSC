/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/V

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n+2];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int frq[m+1]={0};
    for(int i=0; i<n; i++)
    {
        frq[a[i]]++;
    }
    for(int i=1; i<=m; i++)
    {
            cout<<frq[i]<<endl;
    }
}
