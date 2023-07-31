/*
PBL --> https://codeforces.com/contest/1669/problem/B
*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<>());
        for(int i=0; i<n; i++)
        {
            mp[v[i]]++;
        }
        bool ans=true;
        for(int i=0; i<n; i++)
        {
            if(mp[v[i]]>=3)
            {
                cout<<v[i]<<endl;
                ans=false;
                break;
            }
        }
        if(ans)
        {
            cout<<-1<<endl;
        }
    }
}
