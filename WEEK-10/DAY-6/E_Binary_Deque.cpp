/*
PBL --> https://codeforces.com/problemset/problem/1692/E
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,s;
        cin>>n>>s;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];

        }

            int sum=0,l=0,r=0,ans1=-1;
            while(r<n)
            {
                sum +=v[r];
                r++;
                while(sum>s && l<r)
                {
                    sum -=v[l];
                    l++;
                }

                if(sum==s)
                {
                    ans1=max(ans1,(r-l));
                }
            }

            if(ans1==-1)
            {
                cout<<ans1<<endl;
            }
            else
            {
                cout<<n-ans1<<endl;
            }
    }
}
