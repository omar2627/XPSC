/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/J
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int mn=INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(a[i]<mn)
        {
            mn=a[i];
        }
    }
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==mn)
        {
            cnt++;
        }
    }
    if(cnt%2==0)
    {
        cout<<"Unlucky";
    }
    else
    {
        cout<<"Lucky";
    }
}
