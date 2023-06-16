/*
problem link --> https://atcoder.jp/contests/abc125/tasks/abc125_a?lang=en

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,t;
    cin>>a>>b>>t;
    int ans=0;
    for(int i=a; i<=t+.5; i=i+a)
    {
        ans +=b;
    }
    cout<<ans;
}
