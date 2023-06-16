/*
problem link -->  https://codeforces.com/problemset/problem/440/A

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    int frq[n+1];
    for(int i=1; i<=n; i++)
    {
        frq[i]=0;
    }
    for(int i=1; i<n; i++)
    {
        cin>>a[i];
    }
        for(int i=1; i<n; i++)
    {
        frq[a[i]]++;
    }
for(int i=1; i<=n; i++)
{
    if(frq[i]==0)
    {
        cout<<i<<endl;
        break;
    }
}
}
