/*
PBL --> https://codeforces.com/problemset/problem/479/A?fbclid=IwAR04Ann6gI6U1ArLhSk6MZCGBbEXtABk8EbASiCB_PhbO_vfzcslR4WILVc
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    if(a==1 && b==1 && c==1)cout<<3<<endl;
    else if(a==1 && c==1)
    {
        cout<<(a+b+c)<<endl;
    }
    else if(a==1)
    {
        cout<<(a+b)*c;
    }
    else if(b==1)
    {
        int mul=min(a,c)+b;
        cout<<mul*max(a,c);
    }
    else if(c==1)
    {
        cout<<a*(b+c);
    }
    else
    {
        cout<<a*b*c<<endl;
    }
}
