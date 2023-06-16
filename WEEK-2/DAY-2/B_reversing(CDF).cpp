/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    vector<int>v;
    int x=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]==0)
        {
            reverse(v.begin(),v.end());
            v.push_back(a[i]);
        }
        else
        {
            v.push_back(a[i]);
        }
    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}
