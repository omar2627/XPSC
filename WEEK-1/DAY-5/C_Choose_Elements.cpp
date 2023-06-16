/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/C

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k,m;
    cin>>n>>k;
    long long a[n],sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
sort(a,a+n);
for(int i=n-1; i>=0; i--)
{
    if(i==n-k-1)
    {
        break;
    }
    if(a[i]<0)
    {
        break;
    }
    sum +=a[i];
}
    cout<<sum;
}
