/*
PBL -->  https://codeforces.com/contest/1843/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        int i=0,ans=0;
        long long sum=0;
        bool as=false;
        while(i<n)
        {
            if(v[i]>0)
            {
                sum +=v[i];
                i++;
                continue;
            }
            else
            {
                while(v[i]<1 && i<n)
                {
                    if(v[i]<0)
                    {
                        as=true;
                    }
                    sum +=(-1)*v[i];
                    i++;
                }
            }
            if(as)
            {
                ans++;
            }
            as=false;
        }
        cout<<sum<<" "<<ans<<endl;
    }
}
