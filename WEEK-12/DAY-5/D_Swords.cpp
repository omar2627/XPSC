/*
PBL --> https://codeforces.com/contest/1216/problem/D
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;cin>>t;
while(t--)
{
        int n,x;cin>>n>>x;
        long long ans=0;
  int arr[n][32]={0};
  int v;
    for(int i=0; i<n; i++)
    {
        cin>>v;
        ans +=v;
        int j=0;
        arr[i][j]=v;
        j++;
        while(v%x==0)
        {
            v /=x;
            arr[i][j]=v;
            j++;
        }
    }
    bool fg=false;
    for(int i=0; i<32; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(arr[j][i+1]!=0)
            {
                ans +=arr[j][0];
            }
            else
            {
                fg=true;
                break;
            }
        }
        if(fg)
        {
            break;
        }
    }
    cout<<ans<<endl;
}
}
