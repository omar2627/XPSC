/*
PBL  -->  https://codeforces.com/contest/1800/problem/B
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
        string s;
        cin>>s;
        map<char,int>mp;
        for(int i=0; i<n; i++)
        {
                mp[s[i]]++;
        }
        int cnt=0,k1=k;
        for(auto it:mL)
        {
            cout<<it.first<<" "<<it.second<<endl;
        }
for(int i=0; i<n; i++)
{
    int cnt1=mp[s[i]];
    int cnt2=0;
    if(isupper(s[i]))
    {
        cnt1=mp[s[i]+32];
    }
    else
    {
        cnt2=mp[s[i]-32];
    }
    if(cnt1>cnt2 && cnt2>0)
    {
        ans +=cnt2;
        a=cnt1-cnt2;
    }
    else if(cnt2>cnt1 && cnt1>0)
    {
        ans +=cnt1;
        a=cnt2-cnt1;
    }
    else if(cnt1==0)
    {
        continue;
    }
    else if(cnt2==0)
    {
        a=cnt1;
    }
    int b=a/2;
    if(b>k1 && k1>0)
    {
        ans +=k1;
        k1=k1-1;
    }
    else if(b<k1 && k1>0)
    {
        ans +=b;
        k1=k1-b;
    }
    else
    {
        continue;
    }
}

}
}

