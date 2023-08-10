/*
PBL --> https://codeforces.com/problemset/problem/1611/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if((a+b)<4 || a==0 || b==0)
        {
            cout<<0<<endl;
        }
        else
        {
       long long mn=min(a,b);

long long ans=floor((a+b)/4);
long long ans1=min(ans,mn);
cout<<ans1<<endl;
        }
    }
}
