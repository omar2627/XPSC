/*
problem link -->  https://codeforces.com/contest/1692/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
            mp[a[i]]++;
        }
        int ans=0,delet=0;
for(auto it : mp)
{
    delet +=it.second-1;
}
ans=n-delet;
if(delet%2!=0)
{
    ans--;
}
cout<<ans<<endl;
delet=0;
ans=0;
    }
}
