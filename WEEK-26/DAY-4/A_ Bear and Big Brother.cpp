/*
PBL --> https://codeforces.com/problemset/problem/791/A
OMAR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b;cin>>a>>b;
    int yr=0;
    while(a<=b)
    {
        yr++;
        a *=3;
        b *=2;
    }
    cout<<yr<<endl;
}
