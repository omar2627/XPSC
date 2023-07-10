/*
PBL --> https://codeforces.com/contest/1335/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
long long ans=0;
if(n<3)
{
    cout<<0<<endl;
}
else
{
    if(n%2==0)
    {
        int ans= (n/2)-1;
        cout<<ans<<endl;
    }
    else
    {
        int ans=floor(n/2);
        cout<<ans<<endl;
    }
}
    }
}
