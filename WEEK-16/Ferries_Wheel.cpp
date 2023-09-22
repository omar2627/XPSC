/*
PBL --> https://cses.fi/problemset/task/1090
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,x;cin>>n>>x;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    sort(v.begin(),v.end(),greater<>());
    long long gondolas=0;
    int idx=n-1;
    for(int i=0; i<=idx; i++)
    {
        if(v[i]+v[idx]<=x)
        {
            gondolas++;
            idx--;
        }
        else
        {
            gondolas++;
        }
    }
    cout<<gondolas<<endl;
}
