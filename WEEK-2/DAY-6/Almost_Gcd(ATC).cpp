/*
problem link -->  https://atcoder.jp/contests/abc182/tasks/abc182_b?lang=en
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
        map<int,int>mp;

    vector<int>v;
    for(int i=0; i<n; i++)
    {
        for(int j=2; j<=a[i]; j++)
        {
            if(a[i]%j==0)
            {
                mp[j]++;
            }
        }
    }
    int mx=INT_MIN;
    int mx1=INT_MIN;
for(auto it:mp)
{
    if(it.second>=mx&& it.first>mx1)
    {
            mx=it.second;
            mx1=it.first;
    }
}

cout<<mx1;
    }

