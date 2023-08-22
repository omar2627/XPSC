/*
PBL --> https://codeforces.com/contest/1849/problem/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int b,c,h;
        cin>>b>>c>>h;
        if(b>(c+h))
        {
            int ans =(c+h)+(c+h)+1;
            cout<<ans<<endl;
        }
        else
        {
            int ans=b*2-1;
            cout<<ans<<endl;
        }
    }
}
