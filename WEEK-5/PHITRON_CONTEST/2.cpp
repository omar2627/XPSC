/*
PBL -->
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string,int>mp;
    for(int i=0; i<s.size()-1; i++)
    {
        char x=s[i],y=s[i+1];
        string p=string(1,x)+y;
        mp[p]++;
    }
    string ans="";
    int mn=0;
    for(auto it:mp)
    {
        if(it.second>mn)
        {
            mn=it.second;
            ans=it.first;
        }
    }
    cout<<ans<<endl;
}
