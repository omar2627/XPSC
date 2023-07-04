/*
PBL  -->  https://codeforces.com/contest/1702/problem/C
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        unordered_map<long long,vector<int>>mp;
        vector<long long>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]].push_back(i);
        }
        for(int i=0; i<k; i++)
        {
            long long u1,v1;
            cin>>u1>>v1;
           int x= mp[u1].size();
           int y=mp[v1].size();
           bool as=false;
           for(int j=0; j<x; j++)
           {
               for(int c=0; c<y; c++)
               {
                   if(mp[u1][j] < mp[v1][c])
                   {
                       as=true;
                   }
               }
               if(as)
               {
                   cout<<"YES"<<endl;
                   break;
               }
           }
           if(as!=true)
           {
               cout<<"NO"<<endl;
           }
        }
    }
}
