/*
PBL --> https://codeforces.com/contest/1862/problem/C
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<long long>v(n+1);
        map<long long ,long long>mp1,mp2;
        for(int i=1; i<=n; i++)
        {
            long long x;
            cin>>x;
            v[i]=x;
            mp1[i]=x;
            mp2[x]=i;
        }
        bool ans=true;
        for(int i=1; i<=n; i++)
        {
            long long val=v[i];
            long long m1=mp1[val];
            long long m2=mp2[m1];
            if(val!=m2)
            {
                ans=false;
                break;
            }
        }
        if(ans)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
