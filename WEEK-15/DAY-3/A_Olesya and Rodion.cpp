/*
PBL --> https://codeforces.com/contest/584/problem/A?fbclid=IwAR2MoH19i7gI40kxB8mV1ibsCkMRUK5zKafJNHkXbAhdInBTR6mD8Q37734
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,t;
    cin>>n>>t;
    if(n==1 && t==10)
    {
        cout<<-1<<endl;
    }
    else if(t==2)
    {
        for(int i=1; i<=n; i++)
        {
            cout<<2;
        }
        cout<<endl;
    }
    else if(t==3)
    {
        for(int i=1; i<=n; i++)
        {
            cout<<3;
        }
        cout<<endl;
    }
    else if(t==4)
    {
        for(int i=1; i<=n; i++)
        {
            cout<<4;
        }
        cout<<endl;
    }
    else if(t==5)
    {
        for(int i=1; i<=n; i++)
        {
            cout<<5;
        }
        cout<<endl;
    }
    else if(t==6)
    {
        for(int i=1; i<=n; i++)
        {
            cout<<6;
        }
        cout<<endl;
    }
    else if(t==7)
    {
        for(int i=1; i<=n; i++)
        {
            cout<<7;
        }
        cout<<endl;
    }
    else if(t==8)
    {
        for(int i=1; i<=n; i++)
        {
            cout<<8;
        }
        cout<<endl;
    }
    else if(t==9)
    {
        for(int i=1; i<=n; i++)
        {
            cout<<9;
        }
        cout<<endl;
    }
    else if(t==10)
    {
        for(int i=1; i<n; i++)
        {
            cout<<1;
        }
        cout<<0<<endl;
    }
}

