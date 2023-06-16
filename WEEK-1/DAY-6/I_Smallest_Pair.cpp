/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/I

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        long long mn=INT_MAX;
        for(int i=1; i<n; i++)
        {
         for(int j=2+i-1; j<=n; j++)
         {
             if(a[i]+a[j]+j-i < mn)
             {
                 mn= a[i]+a[j]+j-i;
             }
         }
        }
        cout<<mn<<endl;
    }
}
