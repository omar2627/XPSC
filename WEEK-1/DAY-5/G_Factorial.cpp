/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/G

*/

#include<bits/stdc++.h>
using namespace std;
int fac(int n)
{
    if(n==1 || n==0)
    {
        return 1;
    }
    return fac(n-1)*n;
}
int main()
{
    int n,t;
    cin>>t;
    for(int i=0; i<t; i++)
    {
        cin>>n;
     int ans=fac(n);
     cout<<ans<<endl;
    }

}
