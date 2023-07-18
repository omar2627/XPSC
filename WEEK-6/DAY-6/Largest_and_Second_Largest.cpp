/*
PBL --> https://www.codechef.com/problems/LARGESECOND
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
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
sort(v.begin(),v.end(),greater<>());
int ans=0;
for(int i=0; i<n; i++)
{
    if(i==0)
    {
        ans +=v[i];
    }
    else if(v[i]!=v[i-1])
    {
        ans +=v[i];
        break;
    }
    else
    {
        continue;
    }
}
cout<<ans<<endl;
    }
}
