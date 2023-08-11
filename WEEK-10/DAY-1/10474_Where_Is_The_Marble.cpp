/*
PBL --> https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=1415&fbclid=IwAR1AvrmyvzCf-NszbOsz3oAAVcv84Q7gxbY18sasMFrvTrwKFd7DCyiNsHU
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,q;

    int cs=1;
    while(cin>>n>>q)
    {
        if(n==0 && q==0)
        {
            break;
        }
        vector<int>marbles(n);
    for(int i=0; i<n; i++)
    {
        cin>>marbles[i];
    }
    sort(marbles.begin(),marbles.end());
    cout<< "CASE# "<<cs<< ":"<<endl;
    cs++;
while(q--)
{
            int x;cin>>x;
        auto it1=marbles.begin();
        auto it2=lower_bound(marbles.begin(),marbles.end(),x);
        int idx=it2-it1;
        int ans=0;
        if(idx==n)
        {
            ans=-1;
        }
        else if(marbles[idx]!=x)
        {
            ans=-1;
        }
        else
        {
            ans=idx+1;
        }
        if(ans==-1)
        {
            cout<<x <<" not found"<<endl;
        }
        else
        {
            cout<<x<<" found at "<<ans<<endl;
        }
}
    }
}
