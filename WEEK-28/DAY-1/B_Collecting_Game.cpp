/*
PBL --> https://codeforces.com/contest/1904/problem/B
OMAR
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int n;cin>>n;
        vector<pair<long long,int>>v(n);
        long long val;
        for(int i=0; i<n; i++)
        {
            cin>>v[i].first;
            v[i].second=i;
            }
        sort(v.begin(),v.end());
        vector<long long>ps(n,0);
        ps[0]=v[0].first;
        for(int i=1; i<n; i++)
        {
            ps[i]=ps[i-1]+v[i].first;
        }
        stack<int>st;
        vector<int>ans(n,-1);
        for(int i=0; i<n; i++)
        {
            st.push(v[i].second);
            if(v[i+1].first>ps[i] or i==n-1)
            {
                while(!st.empty())
                {
                    ans[st.top()]=i;
                    st.pop();
                }
            }
        }
        for(int i=0; i<n; i++){cout<<ans[i]<<" ";}
        cout<<endl;
    }
}
