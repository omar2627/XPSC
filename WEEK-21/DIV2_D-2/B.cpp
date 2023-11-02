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
        int n,q;cin>>n>>q;
        vector<long long>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        vector<int>x(q);
      int idx2=-1,idx1=-1;
      for(int i=0; i<q; i++)
      {
          if(x[i]==1)
          {
              idx1=i;
              break;
          }
      }
      for(int i=0; i<q; i++)
      {
          if(x[i]==2)
          {
              idx1=i;
              break;
          }
      }
      if(idx1<idx2 && idx1>=0)
      {
          for(int i=0; i<idx1; i++)
          {
              v[i] +=pow(2,x[i]-1);
          }
          for(int i=0; i<=idx; i++)
          {
              if(v[i]%2==0)v[i]+=1;
          }
          for(int i=0; i<n; i++)cout<<v[i]<<" ";
          cout<<endl;
      }
      else
      {

      }
    }
}
