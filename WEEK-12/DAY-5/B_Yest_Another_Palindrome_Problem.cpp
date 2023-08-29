/*
PBL --> https://codeforces.com/problemset/problem/1324/B
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
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        map<int,int>mp;
        bool ans=false,ans1=false;
        for(int i=0; i<n-2; i++)
        {
            if(v[i]==v[i+1] && v[i]==v[i+2])
            {
                ans1=true;
            }
        }
        for(int i=0; i<n-1; i++)
        {
            if(v[i]!=v[i+1])
            {
                mp[v[i]]++;
            }
        }
mp[v[n-1]]++;
        for(auto it:mp)
        {
            if(it.second>=2)
            {
                ans=true;

            }
        }
        if(ans || ans1)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
