/*
PBL --> https://codeforces.com/contest/1614/problem/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        long long l,r,k;
        cin>>n>>l>>r>>k;
        vector<long long>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        if(n==1)
        {
            if(v[0]>=l && v[0]<=r)
            {
                if(v[0]<=k)
                {
                    cout<<1<<endl;
                }
                else
                {
                    cout<<0<<endl;
                }
            }
            else
            {
                cout<<0<<endl;
            }
        }
        else
        {
                    sort(v.begin(),v.end());
        int idxL=-1,idxR=-1;
for(int i=0; i<n; i++)
        {
            if(v[i]>=l)
            {
                    idxL=i;
                    break;
            }
        }
        for(int i=0;i<n; i++)
        {
                        if( v[i]<=r)
            {
                idxR=i;
            }
        }
        if(idxL==-1 || idxR==-1)
        {
            cout<<0<<endl;
        }
        else
        {
            int cnt=0;
            long long ans=0;
        for(int i=idxL; i<=idxR; i++)
        {
            if(ans+v[i]<=k)
            {
                ans +=v[i];
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout<<cnt<<endl;
        }
        }

    }
}
