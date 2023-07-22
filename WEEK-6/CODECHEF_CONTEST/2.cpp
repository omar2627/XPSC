/*
PBL --> https://www.codechef.com/START99D/problems/MOZZ
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,r;
        cin>>x>>y>>r;
        if((x+(r/30))%y==0)
        {
            cout<<(x+(r/30))/y<<endl;
        }
        else
        {
            cout<<((x+(r/30))/y)+1<<endl;
        }
    }
}
