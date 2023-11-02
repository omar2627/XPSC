/*
PBL --> https://codeforces.com/contest/1405/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<long long>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        int l=0,r=1;
        while(r<n)
        {
            if(l==r)r++;
          else if(v[l]>0)
            {

                if(v[r]<0)
                {
                    if(abs(v[r])<v[l])
                    {
                        v[l] +=v[r];
                        v[r]=0;
                        r++;
                    }
                    else if(abs(v[r])>v[l])
                    {
                        v[r] +=v[l];
                        v[l]=0;
                        l++;
                    }
                    else
                    {
                        v[l]=0;
                        v[r]=0;
                        l++;
                        r++;
                    }
                }
                else
                {
                    r++;
                }
            }
            else
            {
                if(v[r]>0)r++;
             l++;
            }
        }
        long long sum=0;
        for(int i=0; i<n; i++)
        {
            if(v[i]>0)sum +=v[i];
            else continue;
        }
        cout<<sum<<endl;
    }
}
