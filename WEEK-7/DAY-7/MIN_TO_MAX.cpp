/*
PBL --> https://www.codechef.com/problems/OPMIN
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
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        sort(v.begin(),v.end());
        int ans=n;
        ans=ans-mp[v[0]];
        cout<<ans<<endl;
    }
}
