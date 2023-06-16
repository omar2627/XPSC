/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/J

*/
#include<bits/stdc++.h>
using namespace std;
vector<int>v;
int main()
{
    int n;
    bool ans=true;
    cin>>n;
    for(int i=2; i<=n; i++)
    {
        for(int j=2; j<=i; j++)
        {
            if(j==i)
            {
                continue;
            }
            if(i%j==0)
            {
                ans=false;
            }
        }
        if(ans)
        {
            v.push_back(i);
        }
        ans=true;
    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}
