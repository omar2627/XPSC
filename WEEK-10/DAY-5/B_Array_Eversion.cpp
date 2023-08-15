/*
PBL --> https://codeforces.com/contest/1591/problem/B
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
        vector<long long>v(n);
        long long mx=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mx=max(mx,v[i]);
        }
        int cnt=0;
        int x=0;
        for(int i=1; i<n; i++)
        {
            if(v[x]==v[i])
            {
                cnt ++;
                x++;
            }
            else
            {
                break;
            }
        }
        if(n==1 || cnt==(n-1) || mx==v[n-1])
        {
            cout<<0<<endl;
        }
        else
        {
            long long mx1=0;
            int cnt=0;
            for(int i=n-1; i>=0; i--)
            {
                if(mx1<v[i])
                {
                    cnt++;
                    mx1=v[i];
                }
            }
            cout<<cnt-1<<endl;
        }
    }
}
