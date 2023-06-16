/*
problem link --> https://atcoder.jp/contests/abc162/tasks/abc162_c?lang=en
*/

#include<bits/stdc++.h>
#include<numeric>
using namespace std;
int main()
{
    int k,a;
    cin>>k;
    int sum=0;
    for(int i=1; i<=k; i++)
    {
        for(int j=1; j<=k; j++)
        {
            for(int m=1; m<=k; m++)
            {
                a= __gcd(i, __gcd(j,m));
                sum +=a;
            }
        }
    }
    cout<<sum;
}
