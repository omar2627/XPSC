/*
PBL  -->  https://codeforces.com/contest/1790/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s,r;
        cin>>n>>s>>r;
        vector<int>v;
        int mx=s-r;
        cout<<mx<<" ";
        n--;
        int a[n];
        for(int i=0; i<n; i++)
        {
            a[i]=1;
        }
        r=r-n;
        int idx=0;
        for(int i=0; i<r; i++)
        {
            if(a[idx]!=mx)
            {
                a[idx]++;
            }
            else
            {
                idx++;
                a[idx]++;
            }
        }
        for(int i=0; i<n; i++)
        {
            cout<<a[i]<<" ";
        }
        cout<<endl;
        idx=0;
    }
}
