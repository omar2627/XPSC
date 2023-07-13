/*
PBL --> https://codeforces.com/contest/1154/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<long long>x(4);
    for(int i=0; i<4; i++)
    {
        cin>>x[i];
    }
    sort(x.begin(),x.end());
    for(int i=4-2; i>=0; i--)
    {
        long long x1=x[3]-x[i];
        cout<<x1<<" ";
    }
}
