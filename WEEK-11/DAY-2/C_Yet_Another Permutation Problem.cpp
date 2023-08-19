/*
PBL --> https://codeforces.com/contest/1858/problem/C
*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>vis(n+1);
        vector<int>ans;
        for(int i=1; i<=n; i++)
        {
            if(vis[i])
            {
                continue;
            }
            int now=i;
            while(now<=n)
            {
                vis[now]=1;
                ans.push_back(now);
                now *=2;
            }
        }
         for(auto val:ans)
    {
        cout<<val<<" ";
    }
    cout<<endl;
    }

}
