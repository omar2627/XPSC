/*
PBL -->
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
 vector<int>v(n);
 bool ans=true;
 for(int i=0; i<n; i++)cin>>v[i];
 while(ans){
    for(int i=0; i<n; i++)
 {
     for(int j=i+1; j<n; j++)
     {
         if(v[i]>v[j]){
          while(v[i]>v[j] && v[i]-v[j]>0)
          {
              v[i]=v[i]-v[j];
          }
         }
         else if(v[i]<v[j])
         {
             while(v[i]<v[j] && v[j]-v[i]>0)
             {
                 v[j]=v[j]-v[i];
             }
         }
     }
 }
 bool ans1=true;
     for(int i=0; i<n; i++)
 {
     for(int j=i+1; j<n; j++)
     {
       if(v[i]>v[j]){
        ans1=false;
       }
       else if(v[i]<v[j]){
        ans1=false;
       }
     }
 }
 if(ans1){
    ans=false;
 }
 }
 int sum=0;
 for(int i=0; i<n;i++)
 {
     sum +=v[i];
 }
 cout<<sum<<endl;
}
