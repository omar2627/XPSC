/*
PBL --> https://codeforces.com/contest/1604/problem/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<long long>v(n+1);
        for(int i=1; i<=n; i++)
        {
            cin>>v[i];
        }
        int i=1;
        int j=1,ans=0;
        while(i<=n)
        {
            if(v[i]<=j)
            {
                i++;
                j++;
            }
            else
            {
                long long dif=v[i]-j;
                ans +=dif;
                j +=dif+1;
                i++;
            }
        }
        cout<<ans<<endl;
    }
}
