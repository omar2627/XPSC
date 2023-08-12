/*
PBL --->
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<long long>v(n);
        map<long long,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        if(mp.size()==1)
        {
            cout<<-1<<endl;
        }
        else
        {
            sort(v.begin(),v.end());
            int sz=0;
            for(int i=0; i<n; i++)
            {
                if(v[i]!=v[i+1])
                {
                    sz=i;
                    break;
                }
            }
            vector<long long>b,c;
            for(int i=0; i<=sz; i++)
            {
                b.push_back(v[i]);
            }
            for(int i=sz+1; i<n; i++)
            {
                c.push_back(v[i]);
            }
            cout<<b.size()<<" "<<c.size()<<endl;
            for(int i=0; i<b.size(); i++)
            {
                cout<<b[i]<<" ";
            }
            cout<<endl;
            for(int i=0; i<c.size(); i++)
                cout<<c[i]<<" ";
        }
        cout<<endl;
    }
}
