/*
PBL --> https://atcoder.jp/contests/abc121/tasks/abc121_d?lang=en
*/

#include<bits/stdc++.h>
using namespace std;
long long computeXor(long long n)
{
 if (n % 4 == 0)
    return n;
  if (n % 4 == 1)
    return 1;
  if (n % 4 == 2)
    return n + 1;
  return 0;
}
int main()
{
    long long a,b;
    cin>>a>>b;

    long long ans1=computeXor(a-1);
    long long ans2=computeXor(b);
    long long ans=ans2 ^ ans1;
    cout<<ans<<endl;
}
