/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/C

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int N;
    cin>>N;
    int a[N+1];
    int e=0,p=0,n=0,o=0;
    for(int i=0; i<N; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<N; i++)
    {
        if(a[i]<0)
        {
            n++;
        }
        else if(a[i]>0)
        {
            p++;
        }
        if(a[i]%2==0)
        {
            e++;
        }
        else
        {
            o++;
        }
    }
    cout<<"Even: "<<e<<endl;
    cout<<"Odd: "<<o<<endl;
    cout<<"Positive: "<<p<<endl;
    cout<<"Negative: "<<n;
}
