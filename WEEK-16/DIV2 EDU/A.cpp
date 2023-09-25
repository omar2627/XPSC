/*
PBL -->
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
        int a,b;
        for(int i=0; i<n; i++)
        {
            cin>>a>>b;
            v.push_back({a,b});
        }
        int first=v[0].first;
        int e=v[0].second;
        bool ans=true,ans1=true;
        for(int i=1; i<n; i++)
        {
            if(first<=v[i].first)
            {
                if(e<=v[i].second)
                {
                    ans=false;
                }
            }
        }
        if(!ans or !ans1)
        {
            cout<<-1<<endl;
        }
        else
        {
            cout<<first<<endl;
        }
    }
}



