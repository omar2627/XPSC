/*
PBL --> https://www.codechef.com/problems/FOODPLAN
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        double n,m;
        cin>>n>>m;
        double x=n*10.0;
        double ans=x/100.0;
        double n1=n-ans;
        if(n1<m)
        {
            cout<<"ONLINE"<<endl;
        }
        else if(n1>m)
        {
            cout<<"DINING"<<endl;
        }
        else if(n1==m)
        {
            cout<<"EITHER"<<endl;
        }
    }
}
