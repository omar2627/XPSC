/*
PBL ->> https://codeforces.com/problemset/problem/474/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int m;cin>>m;
int val;
    vector<pair<int,int>>q;
    for(int i=0; i<m; i++)
    {
        cin>>val;
     q.push_back({val,i});
    }
    sort(q.begin(),q.end());
    vector<int>prefixSum(n);
    prefixSum[0]=v[0];
    for(int i=1; i<n; i++)
    {
        prefixSum[i] =prefixSum[i-1]+v[i];
    }
    vector<int>ans(m);
    int i=0,j=0;
    while(i<n && j<m)
    {
        if(q[j].first<=prefixSum[i])
        {
            ans[q[j].second]=i+1;
            j++;
        }
        else
        {
            i++;
        }
    }
    for(int i=0; i<m; i++)
    {
        cout<<ans[i]<<endl;
    }
}
