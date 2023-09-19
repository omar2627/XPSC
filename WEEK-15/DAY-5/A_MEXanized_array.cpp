/*
PBL --> https://codeforces.com/contest/1870/problem/A
*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,x;
        cin>>n>>k>>x;
        if(k-1>=n or x<k-1)
        {
            cout<<-1<<endl;
        }
        else
        {
            if(k==x)
            {
                int sum=0;
                for(int i=0; i<k; i++)
                {
                    sum +=i;
                }
                int cholbe=n-k;
                for(int i=0; i<cholbe; i++)
                {
                    sum +=k-1;
                }
                cout<<sum<<endl;
            }
            else
            {
                int sum=0;
                for(int i=0; i<k; i++)
                {
                    sum +=i;
                }
                int cholbe=n-k;
                for(int i=0; i<cholbe; i++)
                {
                    sum +=x;
                }
                cout<<sum<<endl;
            }
        }
    }
}
