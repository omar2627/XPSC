/*
PBL --> https://codeforces.com/contest/1791/problem/D
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
        string s;
        cin>>s;
        map<char,int>mpx;
        set<char>st;
        for(int i=0; i<n; i++)
        {
            mpx[s[i]]++;
        }
int ans=0;
for(int i=0; i<n-1; i++)
{
    st.insert(s[i]);
    mpx[s[i]]--;
    if(mpx[s[i]]==0)
    {
        mpx.erase(s[i]);
    }
    int sz1=st.size();
    int sz2=mpx.size();
    int sz=sz1+sz2;
    ans=max(sz,ans);
    sz=0;
}
cout<<ans<<endl;
    }
}
