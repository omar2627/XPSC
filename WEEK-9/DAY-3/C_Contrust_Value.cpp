/*
PBL --> https://codeforces.com/problemset/problem/1832/C
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
        vector<long long>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        if(n==1 || n==2)
        {
            cout<<n<<endl;
        }
        else
        {
              sort(v.begin(),v.end());
              int cnt=0;
              long long construct=0;
              for(int i=0; i<n-1; i++)
              {
                  construct +=abs(v[i]-v[i+1]);
              }
            long long cnst=0;
            int i=0,j=n-1;
            int a=0,b=1,c=n-1,d=n-2;
            while(construct>=cnst)
            {
               if(i==0)
               {
                   cnst +=abs(v[a]-v[c]);
                   cnt++;
               }
               else
               {
                   if(c==n-1)
                   {
                       cnst +=abs(v[])
                   }
               }
            }
        }
    }
}
