/*
problem link --> https://atcoder.jp/contests/abc220/tasks/abc220_a?lang=en

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    bool ans=false;
    int ans1;
    for(int i=a; i<=b; i++)
    {
        if(i%c==0)
        {
            ans=true;
            ans1=i;
            break;
        }
    }
    if(ans)
    {
        cout<<ans1;
    }
    else
    {
        cout<<-1;
    }
}
