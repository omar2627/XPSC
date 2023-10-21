/*
PBL --> https://codeforces.com/contest/1051/problem/B
*/
/*
ekta number jodi 3 hoi onnota tar theke 1 beshi ba kom tahole tader gcd alway 1 hobe must
L=5 R=6 gcd(5,6)=1
*One er shate jekono number er gcd 1 hobe
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long l,r;cin>>l>>r;
    long long start=l,enD=r;
    cout<<"YES"<<endl;
  for(long long i=l; i<=r; i+=2) // L to R er modde (R-L)+1/2 pair ace jader gcd always 1 hobe if (R-L) always ODD number hoi. pair gula hobe A number Will be 1 more than any other number
  {
      cout<<i<<" "<<i+1<<endl;
  }
}
