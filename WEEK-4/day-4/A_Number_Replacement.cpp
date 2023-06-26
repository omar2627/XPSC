/*
PBL  -->  https://codeforces.com/contest/1744/problem/A
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
        vector<int>v(n);
        map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }
        string s;
        vector<char>k(n);
        cin>>s;
        for(int i=0; i<n; i++)
        {
             if(v[i]<1)
                {
                    continue;
                }
                for(int j=i; j<n; j++)
            {
                if(v[i]==v[j] && v[j]>0)
                {
                    k[j] =s[i];
                    if(i<j)
                    {
                        v[j] = -1;
                    }
                }
            }
        }
        bool ans=true;
for(int i=0; i<n; i++)
{
    if(k[i]!=s[i])
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
