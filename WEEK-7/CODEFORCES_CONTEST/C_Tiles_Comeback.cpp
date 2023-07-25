/*
PBL --> https://codeforces.com/contest/1851/problem/C
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        if(mp[v[n-1]]>=k)
        {
            if(mp[v[n-1]]==k*2)
            {
                cout<<"YES"<<endl;
            }
            else
            {
                bool ans=false;
                for(int i=0; i<n-1; i++)
                {
                    if(v[i]!=v[n-1])
                    {
                        if(mp[v[i]]>=k)
                        {
                            ans=true;
                            break;
                        }
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
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
