/*
problem link --> https://atcoder.jp/contests/abc209/tasks/abc209_a?lang=en
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,cnt=0;
    cin>>a>>b;
    if(a>b)
    {
        cout<<0;
    }
    else
    {
        for(int i=a; i<=b; i++)
        {
            cnt++;
        }
        cout<<cnt;
    }
}
