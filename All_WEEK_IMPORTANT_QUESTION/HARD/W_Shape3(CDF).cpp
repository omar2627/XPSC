/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/W
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int k=1;
    for(int i=0; i<n; i++)
    {
        for(int m=0; m<n-1-i; m++)
        {
            cout<<" ";
        }
        for(int j=0; j<k; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        k=k+2;
    }
    int a=n*2-1;
    int o=a,x=0;
    for(int i=0; i<n; i++)
    {
        for(int m=0; m<x; m++)
        {
            cout<<" ";
        }
        x=x+1;
        for(int j=0; j<o; j++)
        {
            cout<<"*";
        }
        cout<<endl;
        o=o-2;
    }
}
