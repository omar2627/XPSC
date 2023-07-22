
/*
PBL --> https://www.codechef.com/START99D/problems/CARDSWIPE
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

        }
        int ans=0,mx=0;
        for(int i=0; i<n; i++)
        {
            if(mp[v[i]]==0)
            {
                ans++;
                mp[v[i]]++;
                                mx=max(ans,mx);
            }
            else if(mp[v[i]]>0)
            {
                ans=ans-1;
                mp[v[i]]=0;
            }
        }
        cout<<mx<<endl;
    }
}
