/*
problem link -->  https://atcoder.jp/contests/abc156/tasks/abc156_b?lang=en
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    int k;
    cin>>n>>k;
    string s="";
    long long a=n;
    while(a!=0)
    {
        long long x=a%k;
        s +=x;
        a=a/k;
    }
    cout<<s.size();
}
