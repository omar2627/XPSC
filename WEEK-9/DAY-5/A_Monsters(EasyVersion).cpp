/*
PBL --> https://codeforces.com/contest/1784/problem/A
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
        int cnt=0,sum=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        for(int i=0; i<n; i++)
        {
                        sum +=v[i];
            if(v[i]==1)
            {
                cnt++;
            }
        }
        if(cnt==n)
        {
            cout<<0<<endl;
        }
        else
        {
            if(sum==n)
            {
                cout<<0<<endl;
            }
            else if(sum<n)
            {
                cout<<1<<endl;
            }
            else
            {
                int ans=sum-n;
                cout<<ans<<endl;
            }
        }
    }
}
