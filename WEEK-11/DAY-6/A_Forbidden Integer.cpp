/*
PBL --> https://codeforces.com/contest/1845/problem/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n>>k>>x;
        if(x==1 && k==1)
        {
            cout<<"NO"<<endl;
        }
        else if(x==1 && k==2)
        {
          if(n%2==0)
          {
              cout<<"YES"<<endl;
              cout<<n/2<<endl;
              for(int i=0; i<n/2; i++)
              {
                  cout<<2<<" ";
              }
              cout<<endl;
          }
          else
          {
              cout<<"NO"<<endl;
          }
        }
        else
        {
            if(x==1)
            {
                if(n%2==0)
                {
                    cout<<"YES"<<endl;
                    cout<<n/2<<endl;
                    for(int i=0; i<n/2; i++)
                    {
                        cout<<2<<" ";
                    }
                    cout<<endl;
                }
                else
                {
                    int val=n-3;
                    int rem=val/2;
                    cout<<"YES"<<endl;
                    cout<<rem+1<<endl;
                    cout<<3<<" ";
                    for(int i=0; i<rem; i++)
                    {
                        cout<<2<<" ";
                    }
                    cout<<endl;
                }
            }
            else
            {
                cout<<"YES"<<endl;
                cout<<n<<endl;
                for(int i=0; i<n; i++)
                {
                    cout<<1<<" ";
                }
                cout<<endl;
            }
        }
    }
}
