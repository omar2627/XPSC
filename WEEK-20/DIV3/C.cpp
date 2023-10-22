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
        int n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
            int product=1;
            for(int i=0; i<n;i++)
            {
                product *=a[i];
            }

            if(product%2==0 && k==2 or product%4==0 && k==4 or product%k==0)
            {
               // cout<<"P"<<" "<<product<<" "<<k<<endl;
                cout<<0<<endl;
            }
            else if(k==2)
            {
                cout<<1<<endl;
            }
            else
            {
                map<int,int>mp;
                for(int i=0; i<n; i++)
                {
                    mp[a[i]]++;
                }
                if(mp[k]>0)
                {
                    cout<<01<<endl;
                }
                else
                {
                    if(k==5)
                    {
                        int ans=11;
                        for(int i=0; i<n;i++)
                        {
                            if(a[i]<5)
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
                        for(int i=0; i<n;i++)
                        {
                            if(a[i]<3)
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
                        }
                        cout<<ans<<endl;
                    }
                    else
                    {
                        if(mp[1]>=2)cout<<2<<endl;
                        else if(product*2%k==0 && mp[1]>=1)cout<<1<<endl;
                        else
                        {
                           int ans=11;
                        for(int i=0; i<n;i++)
                        {
                            if(a[i]<4)
                            {
                                ans =min(ans,4-a[i]);
                            }
                            else if(a[i]<=k*2)
                            {
                                ans =min(ans,8-a[i]);
                            }
                            else if(a[i]<=k*3)
                            {
                                ans =min(ans,12-a[i]);
                            }
                        }
                        if(mp[6]>=1)
                        {
                            if(mp[1]>=1)cout<<1<<endl;
                            else if(mp[5]>=1)cout<<1<<endl;
                            else
                            {
                                cout<<ans<<endl;
                            }

                        }
                        else if(mp[5]>=1)
                        {
                            if(mp[2]>=1)cout<<1<<endl;
                            else if(mp[1]>=1)cout<<2<<endl;
                            else cout<<ans<<endl;
                        }
                        else
                        {
                            cout<<ans<<endl;
                        }
                        }
                    }
                }
            }
    }
}
