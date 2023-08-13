/*
PBL --> https://codeforces.com/contest/1582/problem/B
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int one=0,zero=0;
        for(int i=0; i<n; i++)
        {
           long long val;
           cin>>val;
           if(val==1)
           {
               one++;
           }
           else if(val==0)
           {
               zero++;
           }
        }
        if(one==0)
        {
            cout<<0<<endl;
        }
        else
        {
            long long ans1=pow(2,zero);
           long long ans=ans1*one;
           cout<<ans<<endl;
        }
    }
}
