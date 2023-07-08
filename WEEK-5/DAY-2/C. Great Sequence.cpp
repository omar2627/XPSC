/*
PBL --> https://codeforces.com/contest/1642/problem/C
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        vector<long long>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end());
        int op=0;
        for(int i=0;i<n; i++)
        {
            if(v[i]!=-1)
            {
                long long target=v[i]*x;
            int low=i+1,high=n-1;
            int found=-1;
            while(low<=high)
            {
                int mid=low+(high-low)/2;
                if(v[mid]==target)
                {
                    found=mid;
                    high=mid-1;
                }
                else if(v[mid]>target)
                {
                    high=mid-1;
                }
                else
                {
                    low=mid+1;
                }
            }
                        if(found==-1)
            {
                op++;
            }
            else
            {
                v[found]=-1;
            }
            }
        }
        cout<<op<<endl;
    }
}
