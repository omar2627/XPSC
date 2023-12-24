/*
PBL -->
OMAR
*/

#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<ll>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
int cnt=0;
ll a=-1,b=-1;
int ans=0;
for(int i=2; i<=1000; i++)
{
    for(int j=0; j<n; j++)
    {
        if(j==0)
        {
            a=v[j]%i;
            cnt++;
        }
        else if(b==-1 && v[j]%i!=a)
            {
                b=v[j]%i;
                cnt++;
            }
            else
            {
                if(v[j]%i!=a && v[j]%i!=b && b!=-1)
                {
                    cnt++;
                    break;
                }
            }
            }
            if(cnt==2)
            {
                ans=i;
                break;
            }
            else
            {
                cnt=0;
            }
}
cout<<ans<<endl;
    }
}
