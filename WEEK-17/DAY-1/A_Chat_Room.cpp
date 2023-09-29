/*
PBL --> https://codeforces.com/problemset/problem/58/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    int i=0;
    int sz=s.size();
    int cnt1=0,cnt2=0,cnt3=0,cnt4=0,cnt5=0;
int cnt=0;
for(int i=0; i<sz; i++)
{
    if(s[i]=='h'&&cnt1==0)
    {
        cnt1=1;
        cnt++;
    }
    else if(s[i]=='e' && cnt1==1 && cnt2==0)
    {
        cnt2=1;
        cnt++;
    }
    else if(s[i]=='l' && cnt2==1 && cnt3==0 or cnt3==1)
    {
        cnt++;
        cnt3++;
    }
    else if(s[i]=='o' && cnt3==2&&cnt4==0)
    {
        cnt++;
        cnt4=1;
    }
}
if(cnt==5)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
}
