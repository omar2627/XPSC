/*
PBL -->  https://codeforces.com/contest/1790/problem/D
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
        vector<long long>v(n);
        map<long long,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        sort(v.begin(),v.end());
        int ans=0;
        for(int i=0; i<n; i++)
        {
            long long value=v[i];
            if(mp[value]!=0)
            {
                ans++;
                while(mp[value]>0)
                {
                    mp[value]--;
                    value++;
                }
            }
        }
        cout<<ans<<endl;
        ans=0;
    }
}
