/*
PBL -->
OMAR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<pair<int,int>>a,b,c;
        int val;
for(int i=0; i<n; i++)
{
    cin>>val;
    a.push_back({val,i});
}

for(int i=0; i<n; i++)
{
    cin>>val;
    b.push_back({val,i});
}

for(int i=0; i<n; i++)
{
    cin>>val;
    c.push_back({val,i});
}
                        sort(a.begin(),a.end(),greater<>());
                        sort(b.begin(),b.end(),greater<>());
                        sort(c.begin(),c.end(),greater<>());
                        long long ans=0;
for(int i=0; i<3; i++)
{
    for(int j=0; j<3;j++)
    {
        for(int k=0; k<3; k++)
        {
            if(a[i].second!=b[j].second && a[i].second!=c[k].second && b[j].second!=c[k].second)
            {
                long long sum=a[i].first+b[j].first+c[k].first;
                ans=max(sum,ans);
            }
        }
    }
}

cout<<ans<<endl;
    }
}
