/*
PBL --> https://vjudge.net/contest/568191#problem/G
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<int>v(n);
    map<int,int>mp;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    for(int i=0; i<n; i++)
    {
        mp[v[i]]++;
    }
    vector<int>p;
    for(auto it:mp)
    {
        if(it.second==2)
        {
            p.push_back(it.first);
        }
    }
    vector<int>q,h;
    for(int i=0; i<n; i++)
    {
        if(mp[v[i]]==1)
        {
            h.push_back(v[i]);
            bool ans=true;
            for(int j=0; j<p.size(); j++)
            {
                if(v[i]%p[j]!=0)
                {

                    ans=false;
                    break;
                }
            }
            if(ans)
            {
                q.push_back(v[i]);
            }
            else
            {
                ans=true;
            }
        }
    }
    sort(q.begin(),q.end());
    if(q.size()>=2)
    {
        cout<<q[1]<<" "<<q[0]<<endl;
    }
    else
    {
        cout<<h[0]<<" "<<h[1]<<endl;
    }
}
