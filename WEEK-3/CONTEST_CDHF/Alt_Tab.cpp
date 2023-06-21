/*
PBL -->  https://www.codechef.com/START95D/problems/ALTTAB
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
vector<pair<int,string>>v;
for(int i=0; i<n; i++)
{
    string s;
    cin>>s;
    v.push_back({i,s});
}
map<string,int>mp;
for(int i=0; i<n; i++)
{
    string m=v[i].second;
  mp[m]++;
}
string ans="";
for(int i=n-1; i>=0; i--)
{
    string m=v[i].second;
    char c1=m[m.size()-2];
    char c2=m[m.size()-1];
    string mergedString(1,c1);
    mergedString +=c2;
    if(mp[m]>=1)
    {
        ans +=mergedString;
        mp[m]=-1;
    }
    else
    {
        continue;
    }
}
cout<<ans<<endl;
}
