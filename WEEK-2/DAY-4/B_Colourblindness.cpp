/*
problem link --> https://codeforces.com/contest/1722/problem/B
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
        char a[2][n];
        for(int i=0; i<2; i++)
        {
            for(int j=0; j<n; j++)
            {
                cin>>a[i][j];
            }
        }
        bool ans=true;
        for(int i=0; i<n; i++)
        {
            if(a[0][i]==a[1][i] || a[0][i]=='G' && a[1][i]=='B'|| a[0][i]=='B' && a[1][i]=='G' )
            {
                continue;
            }
            else
            {
                ans=false;
                break;
            }
        }
        if(ans)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
