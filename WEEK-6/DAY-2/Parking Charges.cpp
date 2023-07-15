/*
PBL -->  https://www.codechef.com/problems/PARKINGCHARG
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int x,y,h;
    cin>>x>>y>>h;
    int ans=0;
    for(int i=1; i<=h; i++)
    {
        if(i==1)
        {
            ans +=x;
        }
        else
        {
            ans +=y;
        }
    }
    cout<<ans<<endl;
}
