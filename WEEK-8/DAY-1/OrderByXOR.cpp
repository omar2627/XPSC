/*
PBL --> https://www.codechef.com/problems/XOR_ORDER
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
        if(a<b && b<c)
        {
            cout<<0<<endl;
        }
        else if(a>b && b>c)
        {
            if(a%2!=0 && (a-1)==b)
            {
                cout<<a<<endl;
            }

        }
    }
}
