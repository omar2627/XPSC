/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/S

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m,x;
    cin>>n>>m;
    int a[n][m];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            cin>>a[i][j];
        }
    }
    cin>>x;
    bool ans=false;
        for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(a[i][j]==x)
            {
                ans=true;
            }
        }
    }
    if(ans)
    {
        cout<<"will not take number";
    }
    else
    {
        cout<<"will take number";
    }
}
