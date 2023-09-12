/*
PBL --> https://codeforces.com/problemset/problem/1742/D
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        map<int,int>mp;
        int val;
        for(int i=1; i<=n; i++)
        {
            cin>>val;
            mp[val]=i;
        }
        int ans=-1;
        for(auto it=mp.begin(); it!=mp.end(); it++)
        {
            for(auto i=it; i!=mp.end(); i++)
            {
                if(__gcd(it->first,i->first)==1)
                {
                    int x=it->second+i->second;
                    ans=max(ans,x);
                }
            }
        }
        cout<<ans<<endl;
    }
}
