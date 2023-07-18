/*
PBL --> https://vjudge.net/contest/569683#problem/E
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
int c1=0,c2=0;
for(int i=0; i<n; i++)
{
    if(s[i]=='1')
    {
        c1++;
    }
    else
    {
        c2++;
    }
}
int ans=min(c1,c2);
        if(ans%2==0)
        {
            cout<<"RAMOS"<<endl;
        }
        else
        {
            cout<<"ZLATAN"<<endl;
        }
    }
}
