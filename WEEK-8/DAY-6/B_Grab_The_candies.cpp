/*
PBL --> https://codeforces.com/contest/1807/problem/B
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        int evn=0,odd=0;
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        for(int i=0; i<n; i++)
        {
            if(v[i]%2==0)
            {
                evn +=v[i];
            }
            else
            {
                odd +=v[i];
            }
        }
        if(evn>odd)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
