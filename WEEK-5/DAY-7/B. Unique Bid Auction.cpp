/*
PBL -->  https://codeforces.com/contest/1454/problem/B
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
        vector<int>v(n+1);
        map<int,int>mp;
        for(int i=1; i<=n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        int ans=-1,idx=0;
        for(int i=1; i<=n;  i++)
        {
            if(mp[v[i]]==1)
            {
                if(ans==-1)
                {
                    ans=v[i];
                    idx=i;
                }
                else
                {
                    if(ans>v[i])
                    {
                        ans=v[i];
                        idx=i;
                    }
                }
            }
            else
            {
                continue;
            }
        }
        if(ans== -1)
        {
            cout<<ans<<endl;
        }
        else
        {
            cout<<idx<<endl;
        }
        ans=-1;
        idx=0;
    }
}
