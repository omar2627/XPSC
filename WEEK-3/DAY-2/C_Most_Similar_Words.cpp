/*
PBL --> https://codeforces.com/contest/1676/problem/C
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
    vector<vector<char>> v(n, vector<char>(m));
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>v[i][j];
            }
        }
        int ans=INT_MAX,cnt=0;
        for(int i=0; i<n; i++)
        {
            for(int k=i+1; k<n; k++)
            {
                     for(int j=0; j<m; j++)
            {
                int x=v[i][j]-'a';
                if((i+1)==n)
                {
                        break;
                }
                                int y=v[k][j]-'a';
                if(x > y)
                {
                    cnt +=x-y;
                }
                else
                {
                    cnt +=y-x;
                }
            }
            ans=min(ans,cnt);
            cnt=0;
        }
            }
         cout<<ans<<endl;
    ans=0;
    cnt=0;
    }
}
