/*
PBL --> https://codeforces.com/problemset/problem/112/A
*/

#include<bits/stdc++.h>
using namespace std;
int cnt1=0,cnt2=0;
int main()
{
    string a,b;cin>>a>>b;
    for(int i=0; i<a.size(); i++)
    {
        char f=tolower(a[i]);
        char s=tolower(b[i]);
        if(f-'0' <s-'0')
        {
            cnt1++;
            break;
        }
        else if(f-'0' >s-'0')
        {
            cnt2++;
            break;
        }
    }
    if(cnt1==cnt2)cout<<0<<endl;
    else if(cnt1>cnt2)cout<<-1<<endl;
    else cout<<1<<endl;
}
