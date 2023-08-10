/*
PBL --> https://codeforces.com/contest/1857/problem/C
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
     vector<long long>v(n);
    map<long long,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    vector<pair<int,long long>>x;
    for(auto it:mp)
    {
        x.push_back({it.second,it.first});
    }
    sort(x.begin(),x.end(),greater<>());
    for(int i=0; i<x.size(); i++)
    {
        cout<<x[i].first<<" "<<x[i].second<<endl;
    }

    }
}
