/*
PBL --> https://codeforces.com/problemset/problem/805/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
            int cnt1=0,cnt2=0;
    for(int i=1; i<=n; i++)
    {
        if(cnt1<2)
        {
            cout<<'a';
            cnt1++;
        }
        else
        {
            cout<<'b';
            cnt2++;
        }
        if(cnt2==2)
        {
            cnt1=0;
            cnt2=0;
        }
    }
}
