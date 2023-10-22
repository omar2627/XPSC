/*
PBL --> https://codeforces.com/contest/1784/problem/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int cnt=1;
        int ans=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]==cnt)
            {
                cnt++;
            }
            else if(cnt<v[i])
            {
                ans +=v[i]-cnt;
                cnt++;
            }
        }
        cout<<ans<<endl;
    }
}
