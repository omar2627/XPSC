/*
PBL --> https://codeforces.com/problemset/problem/96/A
OMAR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int cnt1=0,cnt2=0;
    for(int i=0; i<s.size(); i++)
    {
        if(s[i]=='0' )
        {
            if(cnt2==7 or cnt1==7)break;
            cnt1++;
            cnt2=0;
        }
        else
        {
            if(cnt1==7 or cnt2==7)break;
            cnt2++;
            cnt1=0;
        }

    }
    if(cnt1==7 or cnt2==7)cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
