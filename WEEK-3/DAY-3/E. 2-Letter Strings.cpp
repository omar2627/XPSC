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
        map<string,int>Occ;
        for(int i=0; i<n; i++)
        {
                      char a=v[i][0];
            char b=v[i][1];
            string x=string(1,a)+b;
            Occ[x]++;
        }
        map<char,int>f,s;
        for(int i=0; i<n; i++)
        {

                        char a=v[i][0];
            char b=v[i][1];
            f[a]++;
            s[b]++;
        }
        int ans=0;
        for(int i=0; i<n; i++)
        {
            char a=v[i][0];
            char b=v[i][1];
             string x=string(1,a)+b;
           int q=max(0,f[a]-Occ[x]);
           int u=max(0,s[b]-Occ[x]);
           ans +=q+u;
           f[a]--;
           s[b]--;
           Occ[x]--;
        }
        cout<<ans<<endl;
        ans=0;
        }
}
