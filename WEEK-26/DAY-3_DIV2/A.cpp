/*
PBL -->
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
int t;cin>>t;
while(t--)
{
    int n;cin>>n;
   string s;cin>>s;
 bool hobe=false;
 int cnt0=0;
   for(int i=0; i<n-1; i++)
   {
       if(s[i]!=s[i+1])
       {
        hobe=true;
        break;
       }
   }
for(int i=0; i<n; i++)
{
     if(s[i]=='0')cnt0++;
}
   if(hobe or cnt0==n)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}
