/*
PBL --> https://codeforces.com/contest/1899/problem/B

OMAR
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<ll>w(n);
        ll mx=-1e18,mn=1e18;
        for(int i=0; i<n; i++)
        {
            cin>>w[i];
            mx=max(mx,w[i]);
            mn=min(mn,w[i]);
        }
        vector<ll>pSum(n,0);
        pSum[0]=w[0];
        for(int i=1; i<n; i++) pSum[i]=pSum[i-1]+w[i];
        int left=2,right=n/2;
        ll ans=mx-mn;

        while(left<=right)
        {

            if(n%left!=0)
            {
                left++;
                continue;
            }
            mx=-1e18,mn=1e18;
            int x=0,i=left-1;
            while(i<n)
            {
                if(i==left-1)
                {
                    ll sum=pSum[i];
                    mx=max(mx,sum);
                    mn=min(mn,sum);
                    x=i;
                    i +=left;

                }
                else
                {
                    ll sum=pSum[i]-pSum[x];
                    mx=max(mx,sum);
                    mn=min(mn,sum);
                    x=i;
                    i +=left;
                }
            }
            ans=max(ans,abs(mx-mn));
            left++;
        }
        cout<<ans<<endl;
    }
}
