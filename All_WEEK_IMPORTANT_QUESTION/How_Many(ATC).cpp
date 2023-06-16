/*
problem link -->  https://atcoder.jp/contests/abc214/tasks/abc214_b?lang=en
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int s,t;
  cin>>s>>t;
  int cnt=0;

  for(int i=0; i<=s; i++)
  {
      for(int j=0; j<=(s); j++)
      {
          for(int k=0; k<=(s); k++)
          {
              int p=(i+j+k),q=(i*j*k);
                if(p<= s && q<=t)
              {
                  cnt++;
              }
          }
      }
  }
  cout<<cnt;
}
