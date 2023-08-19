/*
PBL --> https://codeforces.com/contest/1859/problem/B
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        long long ans=0,mn=INT_MAX,subMn=INT_MAX;
        for(int i=0; i<n; i++)
        {
            int sz;cin>>sz;
            vector<long long>v(sz);
            for(int i=0; i<sz; i++)
            {
                cin>>v[i];
            }
            sort(v.begin(),v.end());
            mn=min(mn,v[0]);
            subMn=min(subMn,v[1]);
            ans +=v[1];
        }
       cout<<ans-subMn+mn<<endl;
    }
}
