/*
problem link -->  https://vjudge.net/contest/563181#problem/C
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
        bool ans=false;
        int x=0;
        for(int i=0; i<n; i++)
        {
            if(mp[a[i]] >=3)
            {
                x=a[i];
                ans=true;
                mp[a[i]]=0;
            }
            else
            {
                continue;
            }
        }
        if(ans)
        {
            cout<<x<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
