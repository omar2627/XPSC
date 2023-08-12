/*
PBL --> https://codeforces.com/contest/1581/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;cin>>n;
        long long mod=1e9+7;
        long long fact=1;
        for(int i=3; i<=2*n; i++)
        {
            fact *=i;
            fact %=mod;
        }
        cout<<fact<<endl;
    }
}
