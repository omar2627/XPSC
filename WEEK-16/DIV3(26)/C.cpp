/*
PBL -->
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n,k,x;
        cin>>n>>k>>x;
        long long natural=n*(n+1)/2;
        if(natural<x)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(k==1 && x>n)
            {
                cout<<"NO"<<endl;
            }
            else
            {
                if(x<=n)
                {
                    if(x%2==0)
                    {
                        int div=x/2;
                        div--;
                        if(k<=div)
                        {
                            cout<<"YES"<<endl;
                        }
                        else
                        {
                            cout<<"NO"<<endl;
                        }
                    }
                    else if(x%2==0)
                    {
                        int div=x/2;

                        if(k<=div)
                        {
                            cout<<"YES"<<endl;
                        }
                        else
                        {
                            cout<<"NO"<<endl;
                        }
                    }
                }
                else
                {
                    if(k==1)
                        {cout<<"NO"<<0<<endl;}
                    else
                    {
                       long long last_sum=0;
                       for(int i=n-k+1; i<=n; i++)
                       {
                           last_sum +=i;
                       }
                       if(last_sum>=x)
                       {
                           cout<<"YES"<<1<<endl;
                       }
                       else
                       {
                           cout<<"NO"<<1<<endl;
                       }
                    }
                }
            }
        }
    }
}
