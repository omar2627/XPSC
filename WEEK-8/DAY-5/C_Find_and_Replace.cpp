/*
PBL --> https://codeforces.com/contest/1807/problem/C
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        int x=0;
map<char,vector<int>>mp;
for(int i=0; i<n; i++)
{
    mp[s[i]].push_back(i);
}
bool ans=true;
for(auto it:mp)
{
    vector<int>x=it.second;
    int cnt=0,cnt1=0;
    for(int i=0; i<x.size(); i++)
    {
        if(x[i]%2==0)
        {
            cnt++;
        }
        else
        {
            cnt1++;
        }
    }
    if(cnt==x.size() || cnt1==x.size())
    {
        continue;
    }
    else
    {
        ans=false;
        break;
    }
}
if(ans)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
    }
}
