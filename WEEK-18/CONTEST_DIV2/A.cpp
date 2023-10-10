/*
PBL -->
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        if(n<=6 or n==9)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            if(n%3!=0)
            {
                cout<<"YES"<<endl;
                cout<<n-3<<" "<<n-(n-2)<<" "<<n-(n-1)<<endl;
            }
            else
            {
                                cout<<"YES"<<endl;
                cout<<n-5<<" "<<n-(n-4)<<" "<<n-(n-1)<<endl;
            }
        }
    }
}
