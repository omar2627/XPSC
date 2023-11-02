/*
PBL --> https://codeforces.com/contest/1492/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
    vector<int>v(n),b(n);
    map<int,int>mp;
    for(int i=0; i<n; i++)cin>>v[i],b[i]=v[i],mp[v[i]]=0;
    sort(b.begin(),b.end(),greater<>());
    vector<int>ans;
    int j=0;
    for(int i=n-1; i>=0; i--)
    {
      if(v[i]!=b[j])ans.push_back(v[i]),mp[v[i]]=1;
      else
      {
          ans.push_back(v[i]);
          mp[v[i]]=1;
          for(int k=ans.size()-1; k>=0; k--){
            cout<<ans[k]<<" ";
          }
          while(mp[b[j]]==1)j++;
          ans.clear();

      }
    }
    for(int i=ans.size()-1; i>=0; i--)cout<<ans[i]<<" ";
    cout<<endl;
    }
}
