/*
PBL --> https://codeforces.com/problemset/problem/1853/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        bool ans=true;
        for(int i=0; i<n-1; i++)
        {
            if(v[i]>v[i+1])
            {
                ans=false;
                break;
            }
        }
        if(!ans)
        {
            cout<<0<<endl;
        }
        else
        {
            long long mx=INT_MAX;
            for(int i=0; i<n-1; i++)
            {
                if(abs(v[i]-v[i+1])<mx)
                {
                    mx=abs(v[i]-v[i+1]);
                }
            }
            int ans=floor(mx/2)+1;
            cout<<ans<<endl;
        }
    }
}
