/*
PBL --> https://www.codechef.com/problems/CANDYSTORE
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y;
        cin>>x>>y;
        if(x>y)
        {
            cout<<y<<endl;
        }
        else
        {
            int ans +=x+(y-x)*2;
            cout<<ans<<endl;
        }
    }
}
