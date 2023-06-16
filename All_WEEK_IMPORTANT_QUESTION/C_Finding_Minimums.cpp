/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/C

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    long long a[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    long long mn=INT_MAX;
    for(int i=0; i<n; i=i+k)
    {
        if(k+i<n)
        {
            for(int j=i; j<k+i; j++)
        {
            if(a[j]<mn)
            {
                mn=a[j];
            }
        }
        cout<<mn<<" ";
        mn=INT_MAX;
        }
        else
        {
            for(int j=i; j<n; j++)
            {
                if(a[j]<mn)
                {
                    mn=a[j];
                }
            }
            cout<<mn;
            mn=INT_MAX;
        }
    }
}
