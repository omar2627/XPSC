/*
PBL --> https://codeforces.com/contest/1859/problem/C
*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int ans=-1;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                int mx=i*j;
                vector<int>all;
                int cost=0,cur=0;
                for(int index=n; index>=1; index--)
                {
                    int limit =mx/index;
                    while(cur<limit && cur<n)
                    {
                        cur++;
                        if(cur!=j)
                        {
                            all.push_back(cur);
                        }
                    }
                    if(index==i)
                    {
                        continue;
                    }
                    if(all.empty())
                    {
                        cost=-1;
                        break;
                    }
                    cost +=(index*all.back());
                    all.pop_back();
                }
                ans=max(ans,cost);
            }
        }
        cout<<ans<<endl;
    }
}
