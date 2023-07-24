/*
PBL --> https://www.codechef.com/problems/BETDEAL
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        float a,b;
        cin>>a>>b;
        float ans1=100-a;
        float ans2=200-(2*b);
        if(ans1<ans2)
        {
            cout<<"FIRST"<<endl;
        }
        else if(ans1>ans2)
        {
            cout<<"SECOND"<<endl;
        }
        else
        {
            cout<<"BOTH"<<endl;
        }
    }
}
