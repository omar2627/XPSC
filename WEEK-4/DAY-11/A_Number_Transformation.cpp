/*
PBL -->  https://codeforces.com/contest/1674/problem/A
*/

#include<bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        int a=0,b=0;
        if(y%x==0)
        {
             b=y/x;
            a=1;
            cout<<a<<" "<<b<<endl;
        }
        else
        {
            cout<<a<<" "<<b<<endl;
        }
    }
}
