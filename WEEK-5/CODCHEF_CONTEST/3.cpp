/*
PBL --> https://www.codechef.com/START98D/problems/AIRM
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
       vector<int>a(n),d(n);
       for(int i=0; i<n; i++)
       {
           cin>>a[i];
       }
       for(int i=0; i<n; i++)
       {
           cin>>d[i];
       }
       vector<int>v(1440,0);
       v[a[0]] = -1;
       v[d[0]] = -1;
       int run=1;
       for(int i=1; i<n; i++)
       {
           if(v[a[i]]<0 || v[d[i]]<0)
           {
               run++;
               if(v[a[i]]<0 && v[d[i]]>=0)
               {
                   v[d[i]] = v[d[i]]-1;
               }
               else if(v[d[i]]<0 && v[a[i]]>=0)
               {
                 v[a[i]] =v[a[i]]-1;
               }
               else
               {
                   continue;
               }
           }
           else
           {
               v[a[i]] = v[a[i]]-1;
               v[d[i]] = v[a[i]]-1;
           }
       }
       cout<<run<<endl;
       v.clear();
   }
}
