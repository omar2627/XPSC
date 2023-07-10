/*
PBL --> https://vjudge.net/contest/568191#problem/C
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
        long long L,v,l,r;
    cin>>L>>v>>l>>r;
    vector<long long>v1;

long long f=floor((l-1)/v);
long long s=floor(r/v);
long long t=floor(L/v);
long long ans1=s-f;
long long ans2=t-ans1;
cout<<ans2<<endl;
  }
}
