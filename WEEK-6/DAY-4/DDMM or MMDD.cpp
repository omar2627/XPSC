/*
PBL  --> https://www.codechef.com/problems/DDMMORMMDD
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int x,y,z;
        char a,b;
        cin>>x>>a>>y>>b>>z;
        if(x<=12 && y<=12)
        {
            cout<<"BOTH"<<endl;
        }
        else if(x<=12 && y>12)
        {
                        cout<<"MM"<<"/"<<"DD"<<"/"<<"YYYY"<<endl;
        }
        else
        {
            cout<<"DD"<<"/"<<"MM"<<"/"<<"YYYY"<<endl;
        }
    }
}
