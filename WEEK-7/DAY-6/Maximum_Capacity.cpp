/*
PBL --> https://www.codechef.com/problems/MAXCAP
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
        if(x<=8 && (x*y)<=500)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
