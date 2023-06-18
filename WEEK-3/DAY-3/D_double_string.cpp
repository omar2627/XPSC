/*
PBL -->  https://codeforces.com/contest/1703/problem/D
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
        vector<string>v(n);
        map<string,bool>mp;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]=true;
        }
        for(int i=0; i<n; i++)
        {
            bool ans=false;
            for(int j=1; j<v[i].size(); j++)
            {
                string s1=v[i].substr(0 , j);
                string s2=v[i].substr(j,v[i].size()-1);
                if(mp[s1]&&mp[s2])
                {
                    ans=true;
                    break;
                }
            }
            if(ans)
            {
                cout<<1;
            }
            else
            {
                cout<<0;
            }
            ans=false;
        }
        cout<<endl;
    }
}
