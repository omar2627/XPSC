/*
PBL --> https://codeforces.com/contest/1901/problem/B
OMAR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<long long>c(n);
        for(int i=0; i<n; i++)cin>>c[i];
        long long ans=c[0]-1;
      for(int i=1; i<n; i++)
      {
          if(c[i]>c[i-1])
          {
              ans +=c[i]-c[i-1];
          }
      }
      cout<<ans<<endl;
    }
}
