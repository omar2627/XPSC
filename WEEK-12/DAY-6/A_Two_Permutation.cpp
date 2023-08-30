/*
PBL --> https://codeforces.com/contest/1761/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,a,b;
        cin>>n>>a>>b;
      if(n==a && n==b && n==1 or n==2 && n==a && n==b or n==a && n==b)
      {
          cout<<"YES"<<endl;
      }
      else
      {
          int val=n-2;
          if(val<=a or val<=b or (a+b)>val)
          {
              cout<<"NO"<<endl;
          }
          else
          {
              cout<<"YES"<<endl;
          }
      }
    }
}
