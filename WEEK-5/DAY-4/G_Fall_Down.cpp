/*
PBL -->  https://codeforces.com/contest/1669/problem/G
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
        char a[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        for(int i=n-1; i>=0; i--)
        {

            for(int j=m-1; j>=0; j--)
            {
                if(a[i][j]=='*'&& i==n-1)
                {
                    continue;
                }
                else if(a[i][j]=='*')
                {
                    int x=i,y=j;
                    while(a[x][y]<n-1)
                    {
                        if(a[x][y]=='o')
                        {
                            break;
                        }
                        cout<<i<<" "<<j<<endl;
                        x++;
                    }
                    a[x-1][y-1]='*';
                    if(i!=x)
                    {
                        a[i][j]='.';
                    }
                }
                else
                {
                    continue;
                }
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cout<<a[i][j];
            }
            cout<<endl;
        }
        cout<<endl;
    }

    }
