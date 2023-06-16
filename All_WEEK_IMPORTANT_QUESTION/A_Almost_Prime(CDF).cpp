/*
problem link --> https://codeforces.com/problemset/problem/26/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,int>mp;
    for(int i=6; i<=n; i++)
    {
        for(int j=2; j<i; j++)
        {
            if(i%j==0)
            {
                int x=j;
                bool ans=true;
                for(int k=2; k<x; k++)
                {
                    if(x%k==0)
                    {
                        ans=false;
                    }
                }
                if(ans)
                {
                    mp[i]++;
                }
                ans=true;
            }
        }
    }
    int cnt=0;
    for(auto it:mp)
    {
        if(it.second==2)
        {
            cnt++;
        }
    }
    cout<<cnt;
}
