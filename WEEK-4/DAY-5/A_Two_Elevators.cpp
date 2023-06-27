/*
PBL  -->  https://codeforces.com/contest/1729/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        int costA=abs(a-1);
        int  costB=abs(b-c)+abs(c-1);
        if(costA>costB)
        {
            cout<<2<<endl;
        }
        else if(costA<costB)
        {
            cout<<1<<endl;
        }
        else
        {
            cout<<3<<endl;
        }
    }
}
