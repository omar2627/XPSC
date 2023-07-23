/*
PBL --> https://www.codechef.com/problems/EVALMAS
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        if((n+1)==x)
        {
            for(int i=0; i<n; i++)
            {
                cout<<'+';
            }
        }
        else if(n==x)
        {
            for(int i=1; i<n; i++)
            {
                cout<<'+';
            }
            cout<<'*';
        }
        else if(x==1)
        {
            for(int i=0; i<n; i++)
            {
                cout<<'*';
            }
        }
        else if(x==0)
        {
            cout<<'-';
            for(int i=1; i<n; i++)
            {
                cout<<'*';
            }
        }
        else if((1-n)==x)
        {
            for(int i=0; i<n; i++)
            {
                cout<<'-';
            }
        }
        else if((1-n)<x && x<0)
        {
            int m=n+x-1;
            int y=n-m;
            for(int i=0; i<y; i++)
            {
                cout<<'-';
            }
            for(int i=0; i<m; i++)
            {
                cout<<'*';
            }
        }
        else if(x>1 && x<n)
        {
            int m=x-1;
            int y=n-m;
            for(int i=0; i<m; i++)
            {
                cout<<'+';
            }
            for(int i=0; i<y; i++)
            {
                cout<<'*';
            }
        }
        else
        {
            cout<<-1;
        }
        cout<<endl;
    }
}
