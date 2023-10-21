/*
PBL --> https://codeforces.com/contest/742/problem/A?fbclid=IwAR3II8dnaqexRWLXAdMq9Uv2aGYadhKT64BCXEgYy5UOps7eqsoc1Bco2eE
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
  long long n;cin>>n;
if(n==1 or (n-1)%4==0)
{
    cout<<8<<endl;
}
else if(n==2 or (n-2)%4==0)
{
    cout<<4<<endl;
}
else if(n==3 or (n-3)%4==0)
{
    cout<<2<<endl;
}
else if(n==4 or(n-4)%4==0)
{
    cout<<6<<endl;
}
}
