/*
PBL --> https://codeforces.com/contest/1582/problem/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long a,b,c;
        cin>>a>>b>>c;
        long long a1= a;
        long long b1=b*2,c1=c*3;
        if(a==b && b==c)
        {
            cout<<0<<endl;
        }
        else if((a1+b1)==c1)
        {
            cout<<0<<endl;
        }
        else if((b1+c1)==a1)
        {
            cout<<0<<endl;
        }
        else if((a1+c1==b1))
        {
            cout<<0<<endl;
        }
        else if(a1%2!=0 && b1%2==0 && c1%2!=0)
        {
            cout<<0<<endl;
        }
        else if(a1%2==0 && b1%2==0 && c1%2==0)
        {
            cout<<0<<endl;
        }
        else
        {
            cout<<1<<endl;
        }
    }
}
