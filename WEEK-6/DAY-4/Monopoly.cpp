/*
PBL --> https://www.codechef.com/problems/MONOPOLY2
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        vector<int>v(4);
        for(int i=0; i<4; i++)
        {
            cin>>v[i];
        }
        sort(v.begin(),v.end(),greater<>());
        int sum=0,x=v[0];
        for(int i=1; i<4; i++)
        {
            sum +=v[i];
        }
        if(sum<x)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
        sum=0;
    }
}
