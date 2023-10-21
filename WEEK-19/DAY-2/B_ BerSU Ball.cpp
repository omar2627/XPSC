/*
PBL --> https://codeforces.com/contest/489/problem/B?fbclid=IwAR2FTgl-Lo10Pqk-9UGuoPLEwqoopPqLQ21sz9IEHIhnDlDzYjQziDio2XQ
*/
/*
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    int m;cin>>m;
    vector<int>v1(m);
    for(int i=0; i<m; i++)cin>>v1[i];
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
   int sz1=v.size(),sz2=v1.size();
   if(sz1>sz2)
   {
       int ans=0;
       for(int i=0; i<sz2; i++)
       {
           for(int j=0; j<sz1; j++)
{
               if(abs(v1[i]-v[j])<=1 && v[j]>0)
           {
               v[j]=0;
               ans++;
               break;
           }
}
       }
       cout<<ans<<endl;
   }
   else
   {
       int ans=0;
       for(int i=0; i<sz1; i++)
       {
           for(int j=0; j<sz2; j++)
           if(abs(v[i]-v1[j])<=1 && v1[j]>0)
           {
               v1[j]=0;
               ans++;
               break;
           }


       }
       cout<<ans<<endl;
   }
}

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
     map<int,int>mp1,mp2;
    vector<int>v(n);
    for(int i=0; i<n; i++){
            cin>>v[i];
        mp1[v[i]]++;
    }
    int m;cin>>m;
    vector<int>v1(m);
    for(int i=0; i<m; i++)
    {
        cin>>v1[i];
        mp2[v1[i]]++;
    }
    sort(v.begin(),v.end());
    sort(v1.begin(),v1.end());
   int sz1=v.size(),sz2=v1.size();
   if(sz1<sz2)
   {
       int ans=0;
       for(int i=0; i<sz1; i++)
       {

           if(mp2[v[i]-1]>0)
           {
                ans++;
               mp2[v[i]-1]--;
           }
           else if(mp2[v[i]]>0){
            ans++;
            mp2[v[i]]--;
           }
           else if(mp2[v[i]+1]>0){
            ans++;
            mp2[v[i]+1]--;
           }

       }
       cout<<ans<<endl;
   }
   else
   {
       int ans=0;

        for(int i=0; i<sz2; i++)
       {
           if(mp1[v1[i]-1]>0)
           {
                ans++;
               mp1[v1[i]-1]--;
           }
           else if(mp1[v1[i]]>0){
            ans++;
            mp1[v1[i]]--;
           }
           else if(mp1[v1[i]+1]>0){
            ans++;
            mp1[v1[i]+1]--;
           }

       }
       cout<<ans<<endl;
   }
}
