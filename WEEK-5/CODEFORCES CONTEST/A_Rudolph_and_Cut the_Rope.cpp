/*
PBL --> https://codeforces.com/contest/1846/problem/0
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
     vector<pair<int,int>>v;
     for(int i=0; i<n; i++)
     {
         int a,b;
         cin>>a>>b;
         v.push_back({a,b});
     }
     int ropes=0;
     for(int i=0; i<n; i++)
     {
         if(v[i].first>v[i].second)
         {
             ropes++;
         }
     }
     cout<<ropes<<endl;
 }
}
