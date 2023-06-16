/*
problem link -->  https://vjudge.net/contest/563208#problem/E
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
        int a[n];
                int cnt1=0,cnt2=0;
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        for(int i=1; i<=n; i++)
        {
            if(a[i]%2==0)
            {
                cnt1++;
            }
            else if(a[i]%2!=0)
            {
                cnt2++;
            }
        }
           if(cnt1==n)
        {
            cout<<"YES"<<endl;
        }
        else if(cnt2==n)
        {
            cout<<"YES"<<endl;
        }
        for(int i=1; i<=n; i++)
        {
            if(i%2==0)
            {
                a[i]=a[i]+1;
            }
        }
if(cnt1<n && cnt2<n)
{
            int cnt1=0,cnt2=0;
        for(int i=1; i<=n; i++)
        {
            if(a[i]%2==0)
            {
                cnt1++;
            }
            else if(a[i]%2!=0)
            {
                cnt2++;
            }
        }
        if(cnt1==n)
        {
            cout<<"YES"<<endl;
        }
        else if(cnt2==n)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        cnt1=0;
        cnt2=0;
}
    }
}
