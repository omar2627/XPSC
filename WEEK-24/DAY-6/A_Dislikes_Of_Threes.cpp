/*
PBL --> https://codeforces.com/problemset/problem/1560/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int cnt=0;
        int i=1;
        while(cnt<n)
        {
          int val=i%10;
          if(val!=3 && i%3!=0)
          {
              cnt++;
          }
          i++;
        }

        cout<<i-1<<endl;
    }
}
