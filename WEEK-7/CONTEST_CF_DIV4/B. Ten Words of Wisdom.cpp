/*
PBL --> https://codeforces.com/contest/1850/problem/B
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
        vector<pair<int,int>>a,v;
        for(int i=0; i<n; i++)
        {
            int x,y;
            cin>>x>>y;
            a.push_back({x,y});
        }
        for(int i=0; i<n; i++)
        {

            if(a[i].first<=10)
            {
                v.push_back({a[i].second,i+1});
            }
        }
        sort(v.begin(),v.end());
        int x=v[v.size()-1].second;
        cout<<x<<endl;
    }
}
