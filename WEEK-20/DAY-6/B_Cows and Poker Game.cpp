/*
PBL --> https://codeforces.com/contest/284/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string s;cin>>s;
    int hand=0,total=0;
    bool ans=true;
    for(int i=0; i<n; i++)
    {
        if( s[i]=='A')hand++;
        if(s[i]=='I')
        {
            ans=false;
          total++;
        }
    }
if(total==n or (total+hand)==n && hand!=n)cout<<0<<endl;
    else if(ans)cout<<hand<<endl;
    else
    {
        cout<<total<<endl;
    }
}
