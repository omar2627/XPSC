/*
PBL --> https://codeforces.com/contest/284/problem/B
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    string s;cin>>s;
    int I=0,A=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='I')
        {
            I++;
        }
        else if(s[i]=='A')
        {
            A++;
        }
    }
    if(I==0)
    {
        cout<<A<<endl;
    }
    else if(I==1)
    {
        cout<<1<<endl;
    }
    else
    {
        cout<<0<<endl;
    }
}
