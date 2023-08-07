/*
PBL --> https://codeforces.com/problemset/problem/1800/C2
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
        vector<long long>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        priority_queue<long long>pq;
        long long ans=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]>0)
            {
               pq.push(v[i]);
            }
            else if(v[i]==0 && !pq.empty())
            {
                long long val=pq.top();
                pq.pop();
                ans +=val;
            }
            else
            {
                continue;
            }
        }
        cout<<ans<<endl;
    }
}
