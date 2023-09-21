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
        int n,x;cin>>n>>x;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int ans=0,idx=0;
        for(int i=0; i<n; i++)
        {
            if(ans+v[i]<=x)
            {
                ans +=v[i];
            }
            else
            {
                idx=i;
                break;
            }
        }
        if(idx==0)
        {
            cout<<v[n-1]<<endl;
        }
    }
}
