/*
PBL --> https://www.codechef.com/START98D/problems/MVR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,x,y;
    cin>>a>>b>>x>>y;
    int ans1=(a*2)+b,ans2=(x*2)+y;
    if(ans1>ans2)
    {
        cout<<"MESSI"<<endl;
    }
    else if(ans1<ans2)
    {
        cout<<"RONALDO"<<endl;
    }
    else
    {
        cout<<"EQUAL"<<endl;
    }
}
