/*
PBL --> https://codeforces.com/contest/1849/problem/0
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
        if(b<=(c+h))
        {
            int ans=b+(b-1);
            cout<<ans<<endl;
        }
        else if(b>(c+h))
        {
            int ans=(c+h)+(c+h)+1;
            cout<<ans<<endl;
        }
    }
}
