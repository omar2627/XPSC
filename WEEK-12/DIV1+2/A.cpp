/*
PBL --> https://codeforces.com/contest/1864/problem/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        if(n>(y-x))
        {
            cout<<-1<<endl;
        }
        else
        {
            vector<int>v;
            int x1=x,y1=y;
            int cnt=0;
        while(x1<y1 && cnt<=n)
        {
                    y1=y1-cnt;
            v.push_back(y1);
            cnt++;
        }
        if(v.size()<n)
        {
            cout<<-1<<endl;
        }
        else
        {
            sort(v.begin(),v.end());
            int cn=0;
            for(int i=0; i<v.size(); i++)
            {
                if(v[i]==0)
                {
                    continue;
                }
                if(cn<n)
                {
                    cn++;
                    cout<<v[i]<<" ";
                }
            }
            cout<<endl;
        }
        }
    }
}
