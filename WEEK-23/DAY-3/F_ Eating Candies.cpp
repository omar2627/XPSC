/*
PBL --> https://codeforces.com/contest/1669/problem/F

OMAR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int cndy;cin>>cndy;
        vector<int>v(cndy);
        for(int i=0; i<cndy; i++)cin>>v[i];
        int left=0,right=cndy-1;
        int ans=0;
    long long sum1=v[0],sum2=v[cndy-1];
    while(left<right)
    {
        if(sum1==sum2 )
        {
       ans =max(ans,left+1+cndy-right);
       left++;
       sum1 +=v[left];
        }
        else if(sum1<sum2)
        {
           left++;
           sum1 +=v[left];
        }
        else
        {
          right--;
          sum2 +=v[right];
        }
    }

cout<<ans<<endl;
    }
}
