/*
PBL --> https://codeforces.com/problemset/problem/1208/A?fbclid=IwAR1g17JyTQgDtrf1u1zzaw6MwClkPE_jC1RfTnOtLThl3G82xneqlvd6nOk
*/
long long fib(long long n,long long a,long long b)
{
    if(n==0)return a;
    if(n==1)return b;
    return fib(n-1,a,b) ^ fib(n-2,a,b);
}

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long a,b,n;cin>>a>>b>>n;
        long long ans=fib(n,a,b);
        cout<<ans<<endl;
    }
}
