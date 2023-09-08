/*
PBL --> https://codeforces.com/contest/1872/problem/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,c;
        cin>>a>>b>>c;
        if(a==b)
        {
            cout<<0<<endl;
        }
        else if(abs(a-b)<=c)
        {
            cout<<1<<endl;
        }
        else
        {
            int mx=max(a,b),mn=min(a,b);
            int cnt=0;
            while(mn<mx)
            {
                if(mn+c<mx-c)
                {
                    cnt++;
                      mx -=c;
                mn +=c;
                }
                else
                {
                    break;
                }
            }
            if(mn<=mx)
            {
                cout<<cnt+1<<endl;
            }
            else
            {
                cout<<cnt<<endl;
            }
        }
    }
}

