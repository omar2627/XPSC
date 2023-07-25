/*
PBL --> https://vjudge.net/contest/571014#problem/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<long long>v(n);
    map<long long,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    int x=0;
    long long a=0;
    int evcnt=0,odcnt=0;
    for(auto it:mp)
    {
        if((it.first)%2==0)
        {
            evcnt +=it.second;
        }
        else
        {
            odcnt +=it.second;
        }
}
if(evcnt>odcnt)
{
    cout<<odcnt;
}
else
{
    cout<<evcnt;
}
}
