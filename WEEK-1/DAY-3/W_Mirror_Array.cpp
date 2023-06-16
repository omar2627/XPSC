/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/219774/problem/W

CodeForces
*/
#include<bits/stdc++.h>
using namespace std;
int const N=105,M=105;
long long int arr[N][M];
int main()
{
    int n,m;
    cin>>n>>m;
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>arr[i][j];
        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=m; j>=1; j--)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
