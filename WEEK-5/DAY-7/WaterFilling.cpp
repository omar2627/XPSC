/*
PBL --> https://www.codechef.com/problems/WATERFILLING
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
  int t;
  cin>>t;
  while(t--)
  {
        int a[3];
    for(int i=0; i<3; i++)
    {
        cin>>a[i];
    }
    int cnt1=0;
    for(int i=0; i<3; i++)
    {
        if(a[i]==1)
        {
            cnt1++;
        }
    }
    if(cnt1>=2)
    {
        cout<<"Not now";
    }
    else
    {
        cout<<"Water filling time";
    }
    cnt1=0;

  }
}
