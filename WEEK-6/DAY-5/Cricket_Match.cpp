/*
PBL --> https://www.codechef.com/problems/CRICMATCH
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     int n,m;
     cin>>n>>m;
     int ans=(6*m)*6;
     if(ans>=n)
     {
         cout<<"YES"<<endl;
     }
     else
     {
         cout<<"NO"<<endl;
     }
 }
}
