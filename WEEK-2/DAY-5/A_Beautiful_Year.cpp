/*
problem link -->  https://codeforces.com/problemset/problem/271/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int num=n;
   while(true)
   {
       num++;
       string k=to_string(num);
       if(k[0]!=k[1]&&k[0]!=k[2]&&k[0]!=k[3] && k[1]!=k[2]&& k[1]!=k[3] && k[2]!=k[3])
       {
           break;
       }
   }
    cout<<num;
}
