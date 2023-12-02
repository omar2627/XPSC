/*
PBL -->  https://codeforces.com/problemset/problem/546/A
OMAR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int k,n,w;cin>>k>>n>>w;
 long long total=0;
 for(int i=1; i<=w; i++)
 {
     total +=i*k;
 }
  long long ans=total-n;
 if(n>=total)cout<<0<<endl;
 else
cout<<ans<<endl;
}
