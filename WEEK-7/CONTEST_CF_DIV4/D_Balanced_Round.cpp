/*
PBL --> https://codeforces.com/contest/1850/problem/D
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
      vector<long long>v(n);
      for(int i=0; i<n; i++)
      {
          cin>>v[i];
      }
      sort(v.begin(),v.end());
      int ans=0,ans1=0;
if(n==1)
{
    cout<<0<<endl;
}
else
{
          for(int i=0; i<n-1; i++)
      {
          if(abs(v[i]-v[i+1])>k)
          {
              ans=max(ans,ans1+1);
              ans1=0;
          }
          else
          {
              ans1++;
          }
                    if(i==n-2)
          {
              ans=max(ans,ans1+1);
          }
      }
      cout<<(n-ans)<<endl;
}
  }
}
