/*
PBL --> https://www.codechef.com/problems/ONEFULPAIRS
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int x=(a+b)+(a*b);
    if(x==111)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
