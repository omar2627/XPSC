/*
PBL --> https://codeforces.com/contest/1856/problem/0

*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<long long>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        long long ans=0,mx=0;
        for(int i=n-2; i>=0; i--)
        {
            if(v[i]>v[i+1])
            {
                mx=v[i];
                ans=max(ans,mx);
            }
            else
            {
                continue;
            }
        }
        cout<<ans<<endl;
    }
}
