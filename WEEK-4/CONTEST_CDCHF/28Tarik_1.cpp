/*
PBL -> https://www.codechef.com/START96D/problems/ABDIFF
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    int c=(a*b);
    int d=(a+b);
    if(c>d)
    {
        cout<<c-d<<endl;
    }
    else
    {
        cout<<d-c<<endl;
    }
}
