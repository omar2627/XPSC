#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a1,a2,b1,b2,c1,c2;
        cin>>a1>>a2>>b1>>b2>>c1>>c2;
        int ans1=0,ans2=0;
         if((a1<b1 && a1<c1)||(a1>b1 && a1>c1))
         {
             if(a1>b1 && a1>c1)
             {
                 ans1=abs(max(b1,c1)-a1);
             }
             else
             {
                 ans1=abs(min(b1,c1)-a1);
             }
             if((a2>b2 && a2>c2)|| (a2<b2 && a2<c2))
             {
                 if(a2>b2 && a2>c2)
                 {
                     ans2=abs(max(b2,c2)-a2);
                 }
                 else
                 {
                     ans2=abs(min(b2,c2)-a2);
                 }
             }
             else
             {
                 ans2=0;
             }

             cout<<ans1+ans2+1<<endl;
         }
         else if((a2>b2 && a2>c2) || a2<b2 && a2<c2)
         {
             if(a2>b2 && a2>c2)
             {
                 ans2=abs(max(b2,c2)-a2);
             }
             else
             {
                 ans2=abs(min(b2,c2)-a2);
             }
             if((a1<b1 && c1>a1) || (a1>b1 && a1>c1))
             {
                 if(a1>b1 && a1>c1)
                 {
                     ans1=abs(max(b1,c1)-a1);
                 }
                 else
                 {
                     ans1=abs(min(b1,c1)-a1);
                 }
             }
             else
             {
                 ans1=0;
             }
             cout<<ans1+ans2+1<<endl;
         }
         else
         {
             cout<<1<<endl;
         }
    }
}
