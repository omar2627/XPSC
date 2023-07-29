/*
PBL -->  https://codeforces.com/contest/1855/problem/B
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long r=floor(n/2);
        long long l=1;
        long long ans=0;
        if(n%2==0)
        {
            long long cnt=0;
            for(int i=1; i<=r; i++)
            {
                if(n%i==0)
                {
                    cnt++;
                }
                else
                {
                    ans=max(ans,cnt);
                    cnt=0;
                }
            }
            cout<<ans<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
}
