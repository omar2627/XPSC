/*
PBL -->
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
if(k==2)
{
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(a[i]%2==0)cnt++;
    }
    if(cnt>=1)cout<<0<<endl;
    else cout<<1<<endl;
}
                if(k==5)
                {
                    int ans=11;
                    for(int i=0; i<n; i++)
                    {
                        if(a[i]<=5)
                        {
                            ans =min(ans,5-a[i]);
                        }
                        else if(a[i]<=k*2)
                        {
                            ans =min(ans,10-a[i]);
                        }
                    }
                    cout<<ans<<endl;
                }
                else if(k==3)
                {
                    int ans=11;
                    for(int i=0; i<n; i++)
                    {
                        if(a[i]<=3)
                        {
                            ans =min(ans,3-a[i]);
                        }
                        else if(a[i]<=k*2)
                        {
                            ans =min(ans,6-a[i]);
                        }
                        else if(a[i]<=k*3)
                        {
                            ans =min(ans,9-a[i]);
                        }
                        else
                        {
                            ans=min(ans,12-a[i]);
                        }
                    }

                    cout<<ans<<endl;
                }
                else if(k==4)
                {
                    int ans=5;
                    for(int i=0; i<n; i++)
                    {
                        if(a[i]<=4)ans=min(ans,4-a[i]);
                        else if(a[i]<=8)ans=min(ans,8-a[i]);
                        else if(a[i]<=12)ans=min(ans,12-a[i]);
                    }
                   int cnt=0;
                for(int i=0; i<n; i++)
                {
                    if(a[i]%2==0)cnt++;
                }
              ans=min(ans,cnt>= 2 ? 0 : cnt==1 ? 1 : 2);
              cout<<ans<<endl;

        }
    }
}
