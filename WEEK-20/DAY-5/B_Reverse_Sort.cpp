/*
PBL --> https://codeforces.com/contest/1605/problem/B
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        bool ans=true;
        for(int i=0; i<n-1; i++)
        {
            if(s[i]>s[i+1]){
                ans=false;
                break;
            }
        }
        if(ans)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
              int cnt1=0,cnt0=0;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='0')
            {
                cnt0++;
            }
            else
            {
                cnt1++;
            }
        }
        vector<int>v;
        for(int i=0; i<cnt0; i++)
        {
            if(s[i]=='1')
            {
                v.push_back(i+1);
            }
        }
        for(int i=cnt0; i<n; i++)
        {
            if(s[i]=='0')
                v.push_back(i+1);
        }
        for(int i=0; i<v.size(); i++)cout<<v[i]<<" ";
        cout<<endl;
        }
    }
}
