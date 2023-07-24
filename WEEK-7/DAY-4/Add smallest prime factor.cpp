/*
PBL --> https://www.codechef.com/problems/PRIMEFACT
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x;
                long long y;
        cin>>x>>y;
        if(x==5  || x==7)
        {
            long long a=y-(x+x);
            int b=1;
            if(a%2==0)
            {
                int c=a/2;
                b +=c;
                cout<<b<<endl;
            }
            else
            {
                int c=(a+1)/2;
                b +=c;
                cout<<b<<endl;
            }
        }
        else if(x==9 || x==3)
        {
            long long a=y-(x+3);
            int b=1;
            if(a%2==0)
            {
                int c=a/2;
                b +=c;
                cout<<b<<endl;
            }
            else
            {
                int c=(a+1)/2;
                b +=c;
                cout<<b<<endl;
            }
        }
        else
        {
            long long a=y-x;
            if(a%2==0)
            {
                int c=a/2;
                cout<<c<<endl;
            }
            else
            {
                int c=(a+1)/2;
                cout<<c<<endl;
            }
        }
    }
}
