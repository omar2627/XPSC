/*
PBL --> https://codeforces.com/problemset/problem/879/B
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    long long k;
    cin>>n>>k;
    deque<int>dq;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        dq.push_back(x);
    }
  if(k>=n-1)
  {
      cout<<n<<endl;
  }
  else
  {

    long long ans=0;
while(true)
{
    int f1=dq.front();
    dq.pop_front();
    int f2=dq.front();
    dq.pop_front();
    if(ans==k)
    {
        cout<<f1<<endl;
        break;
    }
    else if(f1>f2)
    {
        ans++;
        dq.push_front(f1);
        dq.push_back(f2);
    }
    else
    {
        ans=0;
        ans++;
        dq.push_front(f2);
        dq.push_back(f1);
    }
}
  }
}
