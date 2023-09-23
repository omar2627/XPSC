/*
PBL --> https://codeforces.com/problemset/problem/1433/D
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
        int cnt=0;
        for(int i=1; i<n; i++)
        {
            if(v[i]==v[i-1])
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        if(cnt==n-1)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
            int idx=0;
            for(int i=0; i<n-1; i++)
            {
                if(v[i]!=v[i+1])
                {
                    idx=i;
                    break;
                }
            }
            for(int i=1; i<n; i++)
            {
                if(v[0]!=v[i])
                {
                    cout<<1<<" "<<i+1<<endl;
                }
                else
                {
                    cout<<idx+1<<" "<<i+1<<endl;
                }
            }
        }
    }
}
