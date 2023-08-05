/*
PBL --> https://codeforces.com/contest/1791/problem/E
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
        vector<long long>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int idx=0;
        int ng=0,pos=0;
        long long sum=0,sum1=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]<0)
            {
                sum +=v[i];
                ng++;
            }
            else
            {
                sum1 +=v[i];
                pos++;
            }
        }
if(ng%2==0)
{
    long long ans=sum1+(sum)*(-1);
}
else
{
    long long ng1=INT_MAX,ng2=INT_MAX;
    for(int i=0; i<n; i++)
    {
        if(i==0 && v[i]<0 && ng1>v[i+1])
        {
            ng1=v[i+1];
        }
        else if(i==n-1 && v[i]<0 && ng2>v[i-1])
        {
            ng2=v[i-1];
        }
        else if(v[i]<0)
        {
            if(v[i-1]<ng1 || v[i+1]<ng2)
            {
                ng1=v[i-1];
                ng2=v[i+1];
            }
        }
    }
    long long mn=min(ng1,ng2);
    sum -=mn;
}
    }
}
