/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/H

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    bool ans=true;
    for(int i=2; i<n; i++)
    {
        if(n%i==0)
        {
            ans=false;
        }
    }
    if(ans)
    {
        cout<<"YES";
    }
    else
    {
        cout<<"NO";
    }
}
