/*
PBL --> https://codeforces.com/contest/1729/problem/A
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
        if(a==1)
        {
            cout<<1<<endl;
        }
        else
        {
            int x=abs(a-1);
            int y=abs(b-c)+abs(c-1);
            int z=abs(b-c);
            if(x>z && c==1)
            {
                cout<<2<<endl;
            }
            else if(x<z && c==1)
            {
                cout<<1<<endl;
            }
            else if(x==z && c==1)
            {
                cout<<3<<endl;
            }
            else if(x>y)
            {
                cout<<2<<endl;
            }
            else if(x<y)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<3<<endl;
            }
        }
    }
}
