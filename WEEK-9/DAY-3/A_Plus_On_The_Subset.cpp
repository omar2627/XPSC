/*
PBL --> https://codeforces.com/problemset/problem/1624/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        if(n==1)
        {
            cout<<0<<endl;
        }
        else
        {
            sort(v.begin(),v.end());
            int ans=v[n-1]-v[0];
            cout<<ans<<endl;
        }
    }
}
