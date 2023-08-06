/*
PBL --> https://codeforces.com/problemset/problem/1822/D
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {

    int n;cin>>n;
if(n%2!=0)
{
    cout<<-1<<endl;
}
else
{
    vector<int>val;
     int evn=2,odd=n-1;
     val.push_back(n);
     int x=n-1;
     while(x>0)
     {
         if(x%2!=0)
         {
             val.push_back(odd);
             odd=odd-2;
             x--;
         }
         else
         {
             val.push_back(evn);
             evn +=2;
             x--;
         }
     }
for(int i=0; i<val.size(); i++)
{
    cout<<val[i]<<" ";
}
cout<<endl;
}
    }
}
