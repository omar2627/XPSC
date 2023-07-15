/*
PBL --> https://codeforces.com/problemset/problem/1669/E
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
        vector<string>v;
        for(int i=0; i<n; i++)
        {
            string s;
            cin>>s;
            v.push_back(s);
        }
        map<string,int>mp1;
        for(int i=0; i<n; i++)
        {
                      char a=v[i][0];
            char b=v[i][1];
            string x=string(1,a)+b;
            mp1[x]++;
        }
        map<char,int>mp;
        for(int i=0; i<n; i++)
        {

                        char a=v[i][0];
            char b=v[i][1];
            mp[a]++;
            mp[b]++;
        }
        int ans=0;
        for(int i=0; i<n; i++)
        {
            char a=v[i][0];
            char b=v[i][1];
             string x=string(1,a)+b;
             if(mp1[x]<0)
             {
                 ans -=2;
             }
            ans +=mp[a]-1;
            ans +=mp[b]-1;
            mp1[x]=-1;
            mp[a]--;
            mp[b]--;
        }
        cout<<ans<<endl;
        ans=0;
        }
}
