/*
PBL --> https://codeforces.com/problemset/problem/1732/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;
 cin>>t;
 while(t--)
 {
     int n;
     cin>>n;
     vector<long long>v(n+1);
     for(int i=1; i<=n; i++)
     {
         cin>>v[i];
     }
int point=0;
long long gd=v[0];

for(int i=1; i<=n; i++)
{
    gd=__gcd(gd,v[i]);
}
if(gd==1)
{
    cout<<0<<endl;
}
else
{
    int ans=0;
 for(long long i=n; i>=1; i--)
{
    long long m=__gcd(i,v[i]);

    if(__gcd(i,v[i])==1)
    {
        cout<<(n-i)+1<<endl;
        break;
    }
    else if(i==n)
    {
         long long p=__gcd(i,v[i]);
            for(int j=1; j<i; j++)
            {
                p=__gcd(p,v[j]);
            }
            for(int j=i+1; j<=n; j++)
            {
                p=__gcd(p,v[j]);
            }
            if(p==1)
            {
                cout<<1<<endl;
                break;
            }
            else
            {
                continue;
            }
    }
    else if(i==n-1)
    {
        if(__gcd(v[i],i)==1)
        {
            cout<<2<<endl;
        }
        else
        {
            long long p=__gcd(i,v[i]);
            for(int j=1; j<i; j++)
            {
                p=__gcd(p,v[j]);
            }
            for(int j=i+1; j<=n; j++)
            {
                p=__gcd(p,v[j]);
            }
            if(p==1)
            {
                cout<<2<<endl;
                break;
            }
            else
            {
                cout<<3<<endl;
                break;
            }
        }
    }

}
}

 }
}
