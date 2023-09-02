/*
PBL --> https://codeforces.com/contest/1863/problem/C
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;cin>>t;
while(t--)
{
        int n,k;
    cin>>n>>k;
    k %=n+1;
    vector<int>a(n);
    vector<bool>vis(n+1);
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
        vis[a[i]]=1;
    }
    int nai=-1;
    for(int i=0; i<=n; i++)
    {
        if(vis[i]==0)
        {
            nai=i;
        }
    }
    deque<int>dq(a.begin(),a.end());
    vector<int>all;
    for(int i=0; i<k; i++)
    {
        int val=nai;
        dq.push_front(val);
        nai=dq.back();
        dq.pop_back();

    }
    for(int i=0; i<dq.size(); i++)
    {
        cout<<dq[i]<<" ";
    }
    cout<<endl;
}
}
