/*
problem link -->  https://vjudge.net/contest/563208#problem/D
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
        long long a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        long long ans=0,miN=INT_MAX;
        for(int i=0; i<n; i++)
        {
            if(a[i]<miN)
            {
                miN=a[i];
            }
        }
        for(int i=0; i<n; i++)
        {
            ans +=a[i]-miN;
        }
        cout<<ans<<endl;
    }
}
