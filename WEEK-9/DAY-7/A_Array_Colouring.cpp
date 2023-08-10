/*
PBL --> https://codeforces.com/contest/1857/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int od=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]%2!=0)
            {
                od++;
            }
        }
        if(od%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
