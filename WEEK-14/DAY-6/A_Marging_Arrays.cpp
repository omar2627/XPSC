/*
PBL --> https://codeforces.com/edu/course/2/lesson/9/1/practice/contest/307092/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    vector<int>v(n),v1(m);
    int mxIdx=max(n,m);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<m; i++)
    {
        cin>>v1[i];
    }
    vector<int>ans;
    int idx1=0,idx2=0;
    while(idx1<n && idx2<m)
    {
        if(v[idx1]<v1[idx2])
        {
            ans.push_back(v[idx1]);
            idx1++;
        }
        else if(v[idx1]>v1[idx2])
        {
            ans.push_back(v1[idx2]);
            idx2++;
        }
        else
        {
            ans.push_back(v1[idx2]);
            idx2++;
        }
    }
    if(idx1<n)
    {
        for(int i=idx1; i<n; i++)
        {
            ans.push_back(v[i]);
        }
    }
    else if(idx2<m)
    {
        for(int i=idx2; i<m; i++)
        {
            ans.push_back(v1[i]);
        }
    }
    for(int i=0; i<ans.size(); i++)
    {
        cout<<ans[i]<<" ";
    }
}
