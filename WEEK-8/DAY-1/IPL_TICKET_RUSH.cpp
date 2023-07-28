/*
PBL --> https://www.codechef.com/problems/IPLTRSH
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        if(n>m)
        {
            cout<<(n-m);
        }
        else
        {
            cout<<0<<endl;
        }
    }
}
