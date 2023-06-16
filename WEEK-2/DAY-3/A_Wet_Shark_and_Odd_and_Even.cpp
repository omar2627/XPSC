/*
problem  link -->  https://codeforces.com/problemset/problem/621/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
   int n;
   cin>>n;
   vector<long long>v;
   long long a[n];
   long long sum=0;
   for(int i=0; i<n; i++)
   {
       cin>>a[i];
   }
   for(int i=0; i<n; i++)
   {
         if(a[i]%2==0)
       {
           sum +=a[i];
       }
       else
       {
           v.push_back(a[i]);
       }
   }
   sort(v.begin(),v.end());
   int sz=v.size();
     if(sz%2==0)
     {
          for(int i=0; i<v.size(); i++)
   {
           sum +=v[i];
   }
     }
            else
       {
           for(int i=1; i<v.size(); i++)
           {
               sum +=v[i];
           }
       }
if(sum <= 0)
{
    cout<<0;
}
else
{
    cout<<sum;
}
}
