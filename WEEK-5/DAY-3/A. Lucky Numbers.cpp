/*
PBL -->  https://codeforces.com/contest/1808/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int l,r,mx=0;
        cin>>l>>r;
        int ans=l;
        for(int i=l; i<=r; i++)
        {
           string s=to_string(i);
           sort(s.begin(),s.end());
           int num=s[s.size()-1]-s[0];
           if(mx<num)
           {
               mx=num;
               ans=i;
           }
           if(mx==9)
           {
               break;
           }
        }
        cout<<ans<<endl;
        mx=0;
        ans=0;
    }
}
