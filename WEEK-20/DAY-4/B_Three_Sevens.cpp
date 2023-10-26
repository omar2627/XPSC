/*
PBL --> https://codeforces.com/contest/1798/problem/B
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m;
        cin>>m;
        unordered_map<int,int>mp;
        int jabe=m;
        int vl=0;
        while(jabe--)
        {
            int n;
            cin>>n;
            vector<int>v(n);
            for(int i=0; i<n; i++)cin>>v[i];

            for(int i=0; i<n; i++)
            {

         mp[v[i]]=vl;
        }
       vl++;
    }
    int vl1=1;
    vector<int>v1(m);
    for(int i=0; i<m; i++)v1[i]=-1;
    for(auto it:mp)
    {
      v1[it.second]=it.first;
    }
    bool ans=false;
    for(int i=0; i<m; i++)
    {
        if(v1[i]<=0)ans=true;
    }
    if(ans)cout<<-1<<endl;
    else
    {
        for(int i=0; i<v1.size(); i++)cout<<v1[i]<<" ";
        cout<<endl;
    }
}
}
