/*
problem link --> https://codeforces.com/problemset/problem/633/A

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;
    bool ans=false;
    for(int i=0; i<=10000; i++)
    {
        for(int j=0; j<=10000; j++)
        {
            int m=a*i;
            int n=b*j;
            int o=(m+n);
            if(o==c)
            {
                ans=true;
                break;
            }
        }
    }
    if(ans)
    {
        cout<<"Yes";
    }
    else
    {
        cout<<"No";
    }
}
