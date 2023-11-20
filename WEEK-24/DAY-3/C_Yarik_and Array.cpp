/*
PBL --> https://codeforces.com/contest/1899/problem/C

OMAR
*/


#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<ll>v(n);
        for(int i=0; i<n; i++)
            cin>>v[i];
        ll maxSubSum=v[0],mxSum=v[0];
        for(int i=1; i<n; i++)
        {
          if((abs(v[i])%2!=0 and abs(v[i-1])%2==0) or (abs(v[i])%2==0 and abs(v[i-1])%2!=0))
          {
              mxSum=max(v[i],mxSum+v[i]);
          }
          else
          {
              mxSum=v[i];
          }
            maxSubSum=max(mxSum,maxSubSum);
        }
    cout<<maxSubSum<<endl;
    }
}

