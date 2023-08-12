/*
PBL --> https://codeforces.com/contest/1592/problem/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        long long h;
        cin>>n>>h;
        vector<long long>v;
        set<long long>st;
        for(int i=0; i<n; i++)
        {
            long long x;cin>>x;
            st.insert(x);
        }
        for(auto it:st)
        {
            v.push_back(it);
        }
        sort(v.begin(),v.end(),greater<>());
long long sum=v[0]+v[1];
long long cnt=floor(h/sum);
long long ans=h-(cnt*sum);
if(ans<=v[0] && ans>0)
{
    cnt *=2;
    cnt +=1;
    cout<<cnt<<endl;
}
else if(ans==0)
{
    cnt *=2;
    cout<<cnt<<endl;
}
else
{
    cnt *=2;
    cnt +=2;
    cout<<cnt<<endl;
}
    }
}
