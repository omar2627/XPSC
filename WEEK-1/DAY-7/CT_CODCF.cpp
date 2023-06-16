/*
problem link --> https://www.codechef.com/START93D/problems/PR0BLEM

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        int x=n,y=m;
        int a=0;
        bool ans=true;
        while(a!=100)
        {
            if(x>y)
            {
                x=x-1;
                y=y+1;
            }
            else if(y>x)
            {
                x=x+3;
                y=y-1;
            }
            else
            {
                x=x-1;
                y=y+1;
            }
            if(x==y)
            {
                cout<<"YES"<<endl;
                ans=false;
                break;
            }
            a++;
        }
        if(ans)
        {
            cout<<"NO"<<endl;
        }
}
}
