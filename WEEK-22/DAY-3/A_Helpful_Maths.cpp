/*
PBL --> https://codeforces.com/problemset/problem/339/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    vector<int>v;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]!='+')
        {
            v.push_back(s[i]-'0');
        }
    }
    sort(v.begin(),v.end());
    for(int i=0; i<v.size(); i++)
    {
        if(i>0)
        {
            cout<<'+'<<v[i];
        }
        else
            cout<<v[i];
    }
}
