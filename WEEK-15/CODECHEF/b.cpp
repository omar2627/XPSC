

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,m;cin>>n>>m;
        string s,k;cin>>s>>k;
        int ans=INT_MAX;
        for(int i=0; i<=n-m; i++)
        {
            int ans4=0;
            string a=s.substr(i,m);
         for(int j=0; j<m; j++)
         {
             int x=a[j]-'0',y=k[j]-'0';
             int ans2=abs(x-y);
             int ans3=abs(x-9)+y+1;
            ans4+=min(ans3,ans2);
         }
         ans=min(ans,ans4);
        }
        cout<<ans<<endl;
    }
}
