/*
PBL  -->  https://codeforces.com/contest/1843/problem/C
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
        long long x=n,sum=0;
        while(x>=1)
        {
            sum +=x;
            x=x/2;
        }
        cout<<sum<<endl;
        x=0;
        sum=0;
    }
}
