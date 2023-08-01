/*
PBL --> https://codeforces.com/problemset/problem/1855/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n+1);
        for(int i=1; i<=n; i++)
        {
            cin>>v[i];
        }
        int cnt=0;
        for(int i=1; i<=n; i++)
        {
            if(v[i]==i)
            {
                cnt++;
            }
        }
        if(cnt==0)
        {
            cout<<0<<endl;
        }
        else
        {
            if(cnt%2==0)
            {
                int ans=cnt/2;
                cout<<ans<<endl;
            }
            else
            {
                int ans=floor(cnt/2)+1;
                cout<<ans<<endl;
            }
        }
    }
}
