/*
PBL --> https://www.codechef.com/problems/CUTOFF
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        vector<int>v(x);
        for(int i=0; i<x; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        if(x==y)
        {
            int ans=v[0]-1;
            cout<<ans<<endl;
        }
        else
        {
            int ans=v[n-y]-1;
            cout<<ans<<endl;
        }
    }
}
