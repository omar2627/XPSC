/*
PBL --> https://codeforces.com/contest/1742/problem/E
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
              vector<long long>ans(q);
        vector<long long>v(n+1,0);
        vector<pair<long long,int>>qu(q);
        for(int i=1; i<=n; i++)
        {
            cin>>v[i];
        }
        vector<long long>ps(n+2,0);
      for(int i=1; i<=n; i++)
      {
            ps[i]=(v[i]+ps[i-1]);
      }
        for(int i=0; i<q; i++)
        {
           cin>>qu[i].first;
           qu[i].second=i;
        }
        sort(qu.begin(),qu.end());

      int point=0;
      for(int i=0; i<q; i++)
      {
          while(true)
          {
              if(point==n || v[point+1]>qu[i].first)
              {
                  break;
              }
              point++;
          }
          ans[qu[i].second]=ps[point];
      }
for(int i=0; i<q; i++)
{
    cout<<ans[i]<<" ";
}
ans.clear();
ps.clear();
v.clear();
qu.clear();
cout<<endl;
    }
}
