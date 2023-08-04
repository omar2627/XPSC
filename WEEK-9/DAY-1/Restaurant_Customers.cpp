/*
PBL --> https://cses.fi/problemset/task/1619
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    map<int,long long>prefix;
    for(int i=0; i<n; i++)
    {
        int l,r;cin>>l>>r;
        prefix[l]++;
        prefix[r]--;
    }
    long long sum=0,ans=0;
    for(auto [idx,value]:prefix)
    {
        sum +=value;
        ans=max(sum,ans);
    }
    cout<<ans<<endl;
}
