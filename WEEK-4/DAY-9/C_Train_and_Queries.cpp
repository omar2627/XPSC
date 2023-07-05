/*
PBL  -->  https://codeforces.com/contest/1702/problem/C
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        unordered_map<long long,multiset<int>>mp;
        vector<long long>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
            mp[v[i]].insert(i);
        }
        for(int i=0; i<k; i++)
        {
            long long u1,v1;
            cin>>u1>>v1;
         if(!mp[u1].empty()&&!mp[v1].empty()&& *mp[u1].begin() < *mp[v1].rbegin())
         {
             cout<<"YES"<<endl;
         }
        else
           {
               cout<<"NO"<<endl;
           }
        }
    }
}
