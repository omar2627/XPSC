/*
problem link -->  https://codeforces.com/problemset/problem/1604/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long a[n+1];
        for(int i=1; i<=n; i++)
        {
            cin>>a[i];
        }
        long long cnt=0,idx=0;
        for(int i=1; i<=n; i++)
        {
            if(a[i]> (i+idx))
            {
                cnt +=a[i]-(idx+i);
                idx +=a[i]-(idx+i);
            }
        }
        cout<<cnt<<endl;
    }
}
