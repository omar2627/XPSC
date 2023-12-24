/*
PBL --> https://codeforces.com/contest/1913/problem/B
OMAR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
 int t;cin>>t;
 while(t--)
 {
     string s;cin>>s;
     int n=s.size();
     int one=0,zero=0;
     for(auto c:s)
     {
         if(c=='1')one++;
         else zero++;
     }
     if(one==zero)
     {
         cout<<0<<endl;
     }
     else
     {
         string t;
         for(int c:s)
         {
             if(c=='1' && zero>0)
             {
                 t +='0';
                 zero--;
             }
             else if(c=='0' && one>0)
             {
                 t +='1';
                 one--;
             }
             else
             {
                 t +=(one ? '1':'0');
             }
         }
         int cost=0,i=0;
         for(auto c:s)
         {
             if(c==t[i])
             {
                 cost=n-i;
                 break;
             }
             i++;
         }
         cout<<cost<<endl;
     }
 }
}
