/*
PBL -->  https://codeforces.com/contest/1702/problem/A
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
        int k=0;
        while(pow(10,k) <= n)
        {
            k++;
        }
        long long ans= n-pow(10,k-1);
        if(k==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<ans<<endl;
        }
    }
}
