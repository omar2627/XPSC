/*
PBL  -->  https://www.codechef.com/START95D/problems/TRANCHAIN
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        map<string,int>mp;
        int n;
        cin>>n;
        for(int i=0; i<n; i++)
        {
            string c;
            cin>>c;
            mp[c]++;
        }
        int ans=0,mx=0;
for(auto it:mp)
{
    if(it.second>mx)
    {
        mx=it.second;
        string x=it.first;
    }
}
ans +=mx;
for(auto it:mp)
{
    if(it.first=="O")
    {
        ans+=it.second;
    }
    else if(it.first=="AB")
    {
        ans +=it.second;
    }
}
cout<<ans<<endl;
ans=0;
mx=0;
    }
}
