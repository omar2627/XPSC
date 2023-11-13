/*
PBL --> https://codeforces.com/contest/1797/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        long long k;
        cin>>n>>k;
        int a[n][n];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<n; j++)cin>>a[i][j];
        }
        int jabe=floor(n/2);
    long long op=0;
    for(int i=0; i<jabe; i++)
    {
        for(int j=0; j<jabe; j++)
        {
            if(a[i][j]!=a[n-(i+1)][n-(j+1)])
            {
                op++;
            }
        }
    }
if(n%2!=0)
{
            for(int i=n-1; i>jabe; i--)
    {
        for(int j=0; j<jabe; j++)
        {
            if(a[j][i]!=a[n-(j+1)][n-(i+1)])
            {
                op++;
            }
        }
    }
    for(int i=0; i<jabe; i++)
    {
        if(a[jabe][i]!=a[jabe][n-(i+1)])
        {
            op++;
        }
    }
       for(int i=0; i<jabe; i++)
    {
        if(a[i][jabe]!=a[n-(i+1)][jabe])
        {
            op++;
        }
    }

}
else
{
            for(int i=0; i<jabe; i++)
    {
        for(int j=n-1; j>=jabe; j--)
        {
            if(a[i][j]!=a[n-(i+1)][n-(j+1)])
            {
                op++;
            }
        }
    }
}
     if(op==k or op==0 && k%2==0 or n==1)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        if(op<k)
        {
            long long baki=k-op;
            if(baki%2==0 or n%2!=0)
            {
                cout<<"YES"<<endl;
            }
            else
                cout<<"NO"<<endl;
        }
        else
        cout<<"NO"<<endl;
    }
    }
}
