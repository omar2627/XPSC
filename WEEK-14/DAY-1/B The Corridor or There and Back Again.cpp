/*
PBL --> https://codeforces.com/contest/1872/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<pair<int,int>>v;
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            int d,s;cin>>d>>s;
            v.push_back({d,s});

        }
        sort(v.begin(),v.end());
        int a=v[0].second;
        cout<<a<<endl;
        int x=0;
        if(a%2==0)
        {
            x=(a/2)-1;
        }
        else
        {
            x=floor(a/2);
        }
        cout<<x<<endl;
        int mn=x;
        for(int i=1; i<n; i++)
        {
            int m=v[i].second;
            if(m%2==0)
            {
                mn=min(mn,(m/2)-1);
            }
            else
            {
                int p=floor(m/2);
                mn=min(mn,p);
            }
        }
        cout<<mn<<endl;
    }
}
