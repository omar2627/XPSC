/*
PBL --> https://www.youtube.com/watch?v=OmH_BRMOXmg
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n,t;cin>>n>>t;
    vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
ll l=0,r=1e18,answer=1e18;
while(l<=r)
{
    ll mid=l+(r-l)/2;
  ll products=0;
  for(int i=0; i<n; i++)
  {
      products +=min(mid/v[i],(ll)1e9);
  }
  if(products>=t)
  {
    if(mid<answer)
    {
        answer=mid;
    }
  r=mid-1;
  }
  else
  {
      l=mid+1;
  }
}
cout<<answer<<endl;
}
