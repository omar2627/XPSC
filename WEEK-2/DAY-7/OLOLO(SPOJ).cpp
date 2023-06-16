/*
problem link -->  https://www.spoj.com/problems/OLOLO/en/
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n];
    map<long long ,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        mp[a[i]]++;
    }
    for(auto it:mp)
    {
        if(it.second==1)
        {
            cout<<it.first;
            break;
        }
    }
}
