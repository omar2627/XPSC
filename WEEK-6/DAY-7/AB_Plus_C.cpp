/*
PBL --> https://www.codechef.com/problems/ABPLUSC
*/

#include<bits/stdc++.h>
using namespace std;
const long long m=1e6;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long x;

        cin>>x;
        if(x<=1)
        {
            cout<<-1<<endl;
        }
        else
        {
            if(x<=m)
            {
                cout<<1<<" "<<1<<" "<<x-1<<endl;
            }
            else
            {
                if(x%m==0)
                {
                    cout<<m<<" "<<(x/m)-1<<" "<<m<<endl;
                }
                else
                {
                    cout<<m<<" "<<(x/m)<<" "<<(x%m)<<endl;
                }
            }
        }
    }
}
