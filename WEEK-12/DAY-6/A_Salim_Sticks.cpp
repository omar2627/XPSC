/*
PBL --> https://codeforces.com/problemset/problem/1105/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    vector<int>a;
    for(auto it:mp)
    {
        a.push_back(it.first);
    }
    for(int i=0; i<a.size(); i++)
    {
        cout<<a[i]<<" ";
    }
    sort(a.begin(),a.end());
    bool ans=true;
    for(int i=0; i<a.size()-1; i++)
    {
        if(a[i]!=a[i+1])
        {
            ans=false;
            break;
        }
    }
    if(ans)
    {
        cout<<v[n]
    }
}
