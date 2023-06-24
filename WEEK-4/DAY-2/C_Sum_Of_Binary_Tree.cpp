/*
PBL -->  https://codeforces.com/contest/1843/problem/C
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
        long long sum=0,k=n;
        while(k>0)
        {
            sum +=k;
            k=k/2;
        }
        cout<<sum<<endl;
    }
}
