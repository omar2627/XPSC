/*
PBL -->
OMAR
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
        int x,y;
        for(int i=0; i<n ;i++)
        {
        cin>>x>>y;
        v.push_back({x,y});
        }
        bool one=false,sd=false,td=false,fd=false;
        for(int i=0; i<n; i++)
        {
            if(v[i].first<0  )one=true;
             else if(v[i].first>0)sd=true;
             if(v[i].second>0)td=true;
             if(v[i].second<0)fd=true;
        }
        if(one && sd && td && fd)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
