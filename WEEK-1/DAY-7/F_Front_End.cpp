/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/329103/problem/F

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    long long a[n+1];
    deque<long long>dq;
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    for(int i=0; i<n; i++)
    {
        dq.push_back(a[i]);
    }
    while(!dq.empty())
    {
        if(!dq.empty())
        {
            cout<<dq.front()<<" ";
            dq.pop_front();

        }

        if(!dq.empty())
        {
            cout<<dq.back()<<" ";
            dq.pop_back();
        }
    }
}
