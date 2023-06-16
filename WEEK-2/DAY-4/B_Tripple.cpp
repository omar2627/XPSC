/*
problem link --> https://codeforces.com/problemset/problem/1669/B

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
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        bool ans=false;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            if(mp[a[i]]>=3)
            {
                v.push_back(a[i]);
                ans=true;
                mp[a[i]]=0;
            }
        }
        sort(v.begin(),v.end());
        if(ans)
        {
            cout<<v[v.size()-1]<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
