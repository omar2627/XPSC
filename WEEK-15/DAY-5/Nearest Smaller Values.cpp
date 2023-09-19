/*
PBL --> https://cses.fi/problemset/task/1645
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
  vector<int>v(n+1);
  for(int i=1; i<=n; i++)
  {
      cin>>v[i];
  }
  stack<pair<int,int>>st;
for(int i=1; i<=n; i++)
{
    while(st.size()>0 && st.top().first>=v[i])
    {
        st.pop();
    }
    if(st.size()>0)
    {
        cout<<st.top().second<<" ";
    }
    else
    {
        cout<<0<<" ";
    }
    st.push({v[i],i});
}
}
