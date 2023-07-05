/*
PBL --> https://codeforces.com/contest/1675/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c,x,y;
        cin>>a>>b>>c>>x>>y;
  x=max(0,x-a);
  y=max(0,y-a);
  if((x+y)<=c)
  {
      cout<<"YES"<<endl;
  }
  else
  {
      cout<<"NO"<<endl;
  }
    }
}
