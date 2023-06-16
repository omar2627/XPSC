/*
PBL --> https://practice.geeksforgeeks.org/problems/longest-sub-array-with-sum-k0809/1
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n],ans=0;
    int sum=0;
    unordered_map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i <n;  i++)
    {
        sum +=a[i];
        if(sum==k)
        {
            ans=max(ans,i+1);
        }
        if(mp.find(sum-k)!=mp.end())
        {
            ans=max(ans,i-mp[sum-k]);
        }
        if(mp.find(sum)==mp.end())
        {
            mp[sum]=i;
        }
    }
    cout<<ans<<endl;
}
