/*
problem link -->  https://atcoder.jp/contests/abc051/tasks/abc051_b?lang=en
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y;
    cin>>x>>y;
    int cnt=0;
    for(int i=0; i<=x; i++)
    {
        for(int j=0; j<=x; j++)
        {
            int k=0;
            if((i+j)<=y)
            {
                 k= y-(i+j);
            }
                if((i+j+k)==y && (i+j)<=y && k<=x)
                {
                    cnt++;
            }
        }
    }
    cout<<cnt;
}
