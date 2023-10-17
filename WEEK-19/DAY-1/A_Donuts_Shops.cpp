/*
PBL --> https://codeforces.com/contest/1373/problem/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        long long a,b,c;cin>>a>>b>>c;
        float hobe=c/float(b);
 if(a>c)
 {
     cout<<-1<<" "<<b<<endl;
 }
 else if(a==c && b!=1)
 {
     cout<<-1<<" "<<b<<endl;
 }
 else if(a==c && b==1)
 {
     cout<<-1<<" "<<-1<<endl;
 }
 else if(a<c)
 {
         cout<<1<<" ";
         long long check=(a*b);
         if(check>c)
         {
             cout<<b<<endl;
         }
         else
         {
             cout<<-1<<endl;
         }
     }
 }

}
