/*
problem link -->  https://codeforces.com/contest/1676/problem/B
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
        vector<long long>v;
        for(int i=0; i<n; i++)
        {
            v.push_back(a[i]);
        }
        sort(v.begin(),v.end());
        long long ans=0;
        for(int i=0; i<n; i++)
        {
            ans +=v[i]-v[0];
        }
        cout<<ans<<endl;
        ans=0;
    }
}
