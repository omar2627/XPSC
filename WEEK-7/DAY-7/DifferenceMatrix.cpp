/*
PBL --> https://www.codechef.com/problems/MATDIF
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
        int l=2,r=1;
        for(int i=1; i<=n; i++)
        {
            for(int j=1; j<=n; j++)
            {
                if(l<=n*n)
            {
                cout<<l<<" ";
                l=l+2;
            }
        else
        {
            cout<<r<<" ";
            r +=2;
        }
            }
            cout<<endl;
        }
    }
}
