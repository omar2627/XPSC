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
        map<char,int>mL,mU;
        for(int i=0; i<n; i++)
        {
            if(isupper(s[i]))
            {
                mU[s[i]]++;
            }
            else
            {
                mL[s[i]]++;
            }
        }
        int cnt=0,k1=k;
if(mU.size()>0)
{
    for(auto it:mU)
{
    char x=(it.first+32);
    int cnt1=mL[x];
    int cnt2=mU[it.first];
    int a=-1;
    if(cnt1>=cnt2 )
    {
        cnt +=cnt2;
        a=cnt1-cnt2;
    }
    else if(cnt1<cnt2 && cnt1>0 )
    {
        cnt +=cnt1;
        a=cnt2-cnt1;
    }
    else if(cnt1==0  && cnt1>0)
    {
        cnt +=cnt2/2;
    }
    else if(cnt2==0)
    {
        cnt +=cnt1/2;
    }
    int b=a/2;
    if(b>k1 && k>0)
    {
        cnt +=k1;
        k1=k1-k1;
    }
    else if(b<k1 && k1>0)
    {
        cnt +=b;
        k1=k1-b;
    }
}
}

else
{
    for(auto it:mL)
{
    char x=(it.first-32);
    int cnt1=mU[x];
    int cnt2=mL[it.first];
    int a=0;
    if(cnt1>=cnt2 )
    {
        cnt +=cnt2;
        a=cnt1-cnt2;
    }
    else if(cnt1<cnt2 && cnt1>0 )
    {
        cnt +=cnt1;
        a=cnt2-cnt1;
    }
    else if(cnt1==0  && cnt1>0)
    {
        cnt +=cnt2/2;
    }
    else if(cnt2==0)
    {
        cnt +=cnt1/2;
    }
    int b=a/2;
    if(b>k1 && k>0)
    {
        cnt +=k1;
        k1=k1-k1;
    }
    else if(b<k1 && k1>0)
    {
        cnt +=b;
        k1=k1-b;
    }
    a=0;
}
}
cout<<cnt<<endl;
}
    }

