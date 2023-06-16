/*
problem link --> https://codeforces.com/contest/1722/problem/C

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
       map<string,int>frq;
       vector<vector<string>>a(3,vector<string>(n));
       int p1=0,p2=0,p3=0;
       for(int i=0; i<3; i++)
       {
           for(int j=0; j<n; j++)
           {
               cin>>a[i][j];
               frq[a[i][j]]++;
           }
       }
       for(int i=0; i<3; i++)
       {
           for(int j=0; j<n; j++)
           {
               if(i==0)
               {
                   if(frq[a[i][j]]==1)
                   {
                       p1 +=3;
                   }
                   else if(frq[a[i][j]]==2)
                   {
                       p1++;
                   }
                   else
                   {
                       continue;
                   }
           }
           else if(i==1)
           {
                 if(frq[a[i][j]]==1)
                   {
                       p2 +=3;
                   }
                   else if(frq[a[i][j]]==2)
                   {
                       p2++;
                   }
                   else
                   {
                       continue;
                   }
           }
           else
           {
                 if(frq[a[i][j]]==1)
                   {
                       p3 +=3;
                   }
                   else if(frq[a[i][j]]==2)
                   {
                       p3++;
                   }
                   else
                   {
                       continue;
                   }
           }
       }
   }
   cout<<p1<<" "<<p2<<" "<<p3<<endl;
   p1=0,p2=0,p3=0;
}
}
