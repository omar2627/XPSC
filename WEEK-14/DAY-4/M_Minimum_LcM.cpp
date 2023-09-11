/*
PBL --> https://codeforces.com/problemset/problem/1765/M
*/


#include<bits/stdc++.h>
using namespace std;
bool is_prime(int n)
{
    if(n==2 or n==3)
    {
        return true;
    }
    for(int i=2; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<" "<<n/2<<endl;
        }
        else if(is_prime(n))
        {
            cout<<1<<" "<<n-1<<endl;
        }
        else
        {
            int mx=0;
            for(int i=3; i*i<=n; i++)
            {
                if(n%i==0)
                {
                  int idx=n/i;
                    mx=max(mx,idx);
                }
            }
     cout<<mx<<" "<<n-mx<<endl;
        }
    }
}
