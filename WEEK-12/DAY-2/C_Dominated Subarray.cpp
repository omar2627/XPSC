/*
PBL --> https://codeforces.com/problemset/problem/1257/C
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
        map<int,int>mp;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        if(n==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            int cnt=mp[v[0]];
            int mx=v[0];
            int cnt1=mp[v[0]];
            for(auto it:mp)
            {
                if(cnt1<it.second)
                {
                    mx=it.first;
                    cnt1=it.second;
                }
            }
            if(mp.size()==1)
            {
                cout<<2<<endl;
            }
            else
            {
                int ans1=n+1 ;
                int i=0,idx1=0,cn=1;
                while(i<n)
                {
                    if(v[i]==mx && cn==1)
                    {
                        idx1=i;
                        cn++;
                        i++;
                    }
                    else if(v[i]==mx)
                    {
                        ans1=min(ans1,(i-idx1)+1);
                        idx1=i;
                        i++;
                    }
                    else
                    {
                        i++;
                    }
                }
                cout<<ans1<<endl;
            }
        }
    }
}
