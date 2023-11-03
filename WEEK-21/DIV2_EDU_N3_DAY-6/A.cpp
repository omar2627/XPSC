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
     int x,y,k;cin>>x>>y>>k;
     if(y<x)cout<<x<<endl;
     else
     {
         int ans=y;
         int sub=y-x;
         if(sub<=k)cout<<y<<endl;
         else
         {
             ans +=(sub-k);
             cout<<ans<<endl;
         }
     }

    }
}

