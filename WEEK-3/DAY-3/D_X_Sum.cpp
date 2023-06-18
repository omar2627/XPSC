/*
PBL -->  https://codeforces.com/contest/1676/problem/D
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
        int a[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        int ans=0,sum=0;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                int x=i-1,y=j-1;
                int x1=i-1,y1=j+1;
                int  x2=i+1,y2=j-1;
                int x3=i+1,y3=j+1;
                sum +=a[i][j];
                while(true)
                {
                    if(x<0 || y<0 )
                    {
                        break;
                    }
                    sum +=a[x][y];
                    x--;
                    y--;
                }
                while(true)
                {
                    if(x1<0 || y1==m)
                    {
                        break;
                    }
                    sum +=a[x1][y1];
                    x1--;
                    y1++;
                }
                while(true)
                {
                    if(y2<0 || x2==n)
                    {
                        break;
                    }
                    sum +=a[x2][y2];
                    y2--;
                    x2++;
                }
                while(true)
                {
                    if(x3==n|| y3==m)
                    {
                        break;
                    }
                    sum +=a[x3][y3];
                    x3++;
                    y3++;
                }
                ans=max(ans,sum);
                sum=0;
                x=0,y=0,x1=0,y1=0,x2=0,y2=0,x3=0,y3=0;

            }
        }
        cout<<ans<<endl;
        ans=0;
        sum=0;
    }
}
