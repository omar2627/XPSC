/*
PBL --> https://codeforces.com/contest/1704/problem/B
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,x;cin>>n>>x;
        int ans=0;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int i=0,j=1,mn=v[0],mx=v[0];
        while(i<n-1 && j<n)
        {
            if(abs(mx-v[j])<=x*2 && abs(mn-v[j])<=x*2)
            {
                mx=max(mx,v[j]);
                mn=min(mn,v[j]);
                j++;
            }
            else
            {
                mx=v[j];
                mn=v[j];
             ans++;
             i=j;
             j =j+1;
            }
        }
        cout<<ans<<endl;
    }
}
