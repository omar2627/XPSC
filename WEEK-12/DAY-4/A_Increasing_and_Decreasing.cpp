/*
PBL --> https://codeforces.com/contest/1864/problem/A
*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x,y,n;
        cin>>x>>y>>n;
        if(n>(y-x))
        {
            cout<<-1<<endl;
        }
        else
        {
            vector<int>v;
            int x1=x,y1=y;
            int cnt=0;
        while(x1<y1 && cnt<=n)
        {
                    y1=y1-cnt;
            v.push_back(y1);
            cnt++;
        }
        if(v.size()<n)
        {
            cout<<-1<<endl;
        }
        else
        {
            vector<int>v1;
            for(int i=0; i<n-1; i++)
            {
                v1.push_back(v[i]);
            }
            v1.push_back(x);
            sort(v1.begin(),v1.end());
        int a=v1[0],b=v1[1],c=v1[2];
          if((c-b)<(b-a))
          {
              for(int i=0; i<v1.size(); i++)
              {
                  cout<<v1[i]<<" ";
              }
              cout<<endl;
          }
          else
          {
              cout<<-1<<endl;
          }
        }
        }
    }
}

