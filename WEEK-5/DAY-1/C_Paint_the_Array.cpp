/*
PBL --> https://codeforces.com/contest/1618/problem/C
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
        vector<long long>v(n+3);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        long long gcd1=0,gcd2=0;
        for(int i=0; i<n; i++)
        {
            if(i%2==0)
            {
                gcd1=__gcd(gcd1,v[i]);
            }
            else
            {
                gcd2=__gcd(gcd2,v[i]);
            }
        }
        int a=0,b=0;
        for(int i=1; i<n; i+=2)
        {
            if(v[i]%gcd1==0)
            {
                a=1;
                break;
            }
        }
        for(int i=0; i<n; i+=2)
        {
            if(v[i]%gcd2==0)
            {
                b=1;
                break;
            }
        }
        if(a==1&&b==1)
        {
            cout<<0<<endl;
        }
        else if(a==0)
        {
            cout<<gcd1<<endl;
        }
        else
        {
            cout<<gcd2<<endl;
        }
    }
}
