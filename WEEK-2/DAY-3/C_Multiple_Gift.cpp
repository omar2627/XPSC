/*
problem link -->  https://atcoder.jp/contests/abc083/tasks/arc088_a?lang=en

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long x,y;
    cin>>x>>y;
    long long a=x;
    int cnt=0;
    while(a<=y)
    {
        a +=a;
        cnt++;
    }
    cout<<cnt;
}
