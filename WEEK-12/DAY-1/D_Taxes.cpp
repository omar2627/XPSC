/*
PBL --> https://codeforces.com/problemset/problem/735/D
*/


#include<bits/stdc++.h>
bool is_prime(long long n)
{
    if(n==1)
    {
        return false;
    }
    if(n==2)
    {
        return true;
    }
    if(n%2==0)
    {
        return false;
    }
    for(int i=3; i*i<=n; i++)
    {
        if(n%i==0)
        {
            return false;
        }
    }
    return true;
}
using namespace std;
int main()
{
    long long n;cin>>n;
    if(is_prime(n))
    {
        cout<<1<<endl;
    }
    else if(n&1)
    {
        if(is_prime((n-2)))
        {
            cout<<2<<endl;
        }
        else
        {
            cout<<3<<endl;
        }
    }
    else
    {
        cout<<2<<endl;
    }
}
