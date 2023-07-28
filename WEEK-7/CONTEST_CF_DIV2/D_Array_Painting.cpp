/*
PBL --> https://codeforces.com/contest/1849/problem/D
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        mp[v[i]]++;
    }
    int ans=0;
     ans +=mp[2];
     int x=0,y=0;
   if(mp[0]>0)
   {
        x=mp[0];
        y=mp[2]*2;
        mp[0] -=mp[2]*2;
        y -=x;
   }
   else
   {
       mp[1] -=mp[2]*2;
   }
    if(mp[1]>0)
    {
        if(y>0)
        {
            mp[1] -=y;
            if(mp[1]>0)
            {
                          ans +=mp[1];
        mp[0] =mp[0]-mp[1];
            }
        }
    else
    {
          ans +=mp[1];
        mp[0] =mp[0]-mp[1];
    }
    }
    if(mp[0]>0)
    {
        ans +=mp[0];
    }
    cout<<ans;
}
