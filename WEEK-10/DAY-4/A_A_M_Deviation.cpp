/*
PBL --> https://codeforces.com/contest/1605/problem/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long a1,a2,a3;
        cin>>a1>>a2>>a3;
        long long ans1=a1+a3,ans2=a2*2;
        long long ans=abs(ans1-ans2);
      if(ans%3==0)
      {
          cout<<0<<endl;
      }
      else
      {
          cout<<1<<endl;
      }
    }
}
