/*
PBL --> https://codeforces.com/problemset/problem/1154/B
*/

#include<bits/stdc++.h>
int ans=1e9;
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0;i<n; i++)
    {
        cin>>v[i];
    }
   for(int i=0; i<=100; i++)
   {
       set<int>s;
       for(int j=0; j<n; j++)
       {
           if(i!=v[j])
           {
               s.insert(abs(i-v[j]));
           }
       }
       if(s.size()==1)
       {
           ans=min(ans,*s.begin());
       }
   }
   if(ans==1e9)
   {
       cout<<-1<<endl;
   }
   else
   {
       cout<<ans<<endl;
   }
       }


