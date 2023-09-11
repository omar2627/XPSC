/*
PBL --> https://codeforces.com/contest/1867/problem/0
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<pair<int,int>>v;
        int val;
        for(int i=0; i<n; i++)
        {
          cin>>val;
            v.push_back({val,i});
        }
        sort(v.begin(),v.end(),greater<>());
        int freq[n];
        for(int i=0; i<n; i++)
        {
            freq[v[i].second]=i+1;
        }
        for(int i=0; i<n; i++)
        {
            cout<<freq[i]<<" ";
        }
        cout<<endl;
    }
}
