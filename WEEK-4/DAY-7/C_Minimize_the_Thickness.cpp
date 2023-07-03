/*
PBL  -->  https://codeforces.com/contest/1741/problem/C
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
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        long long sum1=0;
        int ans=n;
        for(int i=0; i<n; i++)
        {
            long long sum2=0;
            int len=0,mxlen=i+1;
            sum1 +=v[i];
            bool possible=false;
            for(int j=i+1; j<n; j++)
            {
                if(sum2+v[j] > sum1)
                {
                    break;
                }
                if(j==n-1 && sum2+v[j]==sum1)
                {
                    possible=true;
                    mxlen=max(mxlen,len+1);
                    break;
                }
                sum2 +=v[j];
                len++;
                if(sum1==sum2)
                {
                    mxlen=max(mxlen,len);
                    len=0;
                    sum2=0;
                }
            }
            if(possible)
            {
                ans=min(ans,mxlen);
            }
        }
        cout<<ans<<endl;
    }
}
