/*
PBL -->
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,h;cin>>n>>h;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<>());
        int check=0;
        int idx=0;
        int m=0;
        for(int i=0; i<n; i++)
        {
            if(check+v[i]<h)
            {
                check +=v[i];
            }
            else
            {
                idx=i;
                break;
            }
            m++;
        }
        if(idx==0 && m!=n)
        {
            cout<<v[idx]<<endl;
        }
        else if(m==n)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<v[idx]<<endl;
        }
    }
}
