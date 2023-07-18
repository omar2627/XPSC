/*
PBL --> https://vjudge.net/contest/569683#problem/D
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
vector<int>ans;
int a=abs(v[1]-v[0]);
ans.push_back(a);
int b=abs(v[n-2]-v[n-1]);
ans.push_back(b);
for(int i=1; i<n-1; i++)
{
    int a=abs(v[i-1]-v[i]);
    int b=abs(v[i+1]-v[i]);
    int c=max(a,b);
    ans.push_back(c);
}
sort(ans.begin(),ans.end());
cout<<ans[0]<<endl;
    }
}
