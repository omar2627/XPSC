
/*
PBL -->  https://codeforces.com/contest/1772/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
       int x1,x2,x3,x4;
       cin>>x1>>x2>>x3>>x4;
       int a1=x1,a2=x2,a3=x3,a4=x4;
       bool ans=false;
       int op=0;
       while(op!=4)
       {
           if(a1<a2&&a1<a3 && a2<a4 && a3<a4)
           {
            ans=true;
            break;
           }
           else
           {
               int tmp1,tmp2,tmp3,tmp4;
               tmp1=a1;
               a1=a3;
               tmp2=a2;
               a2=tmp1;
               tmp3=a3;
               tmp4=a4;
               a4=tmp2;
               a3=tmp4;
               op++;
           }
       }
                  if(ans)
           {
               cout<<"YES"<<endl;
           }
           else
           {
               cout<<"NO"<<endl;
           }
           ans=false;
    }

}
