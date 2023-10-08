/*
PBL --> https://codeforces.com/contest/435/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;cin>>n>>m;
    int jotokkon=m;
    int BusLagbe=0;
   vector<int>v(n);
   for(int i=0; i<n; i++)
   {
       cin>>v[i];
   }
   int i=0;
   while(i<n)
   {
       int bus_e_atmost_thakbe=m;
       while(bus_e_atmost_thakbe>=v[i])
       {
           bus_e_atmost_thakbe -=v[i];
           i++;
       }
       BusLagbe++;
   }
   cout<<BusLagbe<<endl;
}
