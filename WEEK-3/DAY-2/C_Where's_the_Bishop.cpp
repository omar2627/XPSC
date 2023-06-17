/*
PBL -->  https://codeforces.com/contest/1692/problem/C
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        char a[8][8];
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                cin>>a[i][j];
            }
        }
        int x=0,y=0;
        for(int i=0; i<8; i++)
        {
            for(int j=0; j<8; j++)
            {
                if(i<1 || j<1 || j>6 || i>6)
                {
                    continue;
                }
                else
                {
                    if(a[i-1][j-1]=='#' && a[i+1][j+1]=='#' && a[i-1][j+1]=='#' && a[i+1][j-1]=='#')
                    {
                        x=i+1;
                        y=j+1;
                        break;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
        }
        cout<<x<<" "<<y<<endl;
        x=0;
        y=0;
    }
}
