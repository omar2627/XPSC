/*
PBL -->
OMAR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int a,b,c;cin>>a>>b>>c;
     cout<<(abs(b-c) &1 ? "0 " : "1 ");
     cout<<(abs(a-c) & 1 ? "0 " : "1 ");
     cout<<(abs(a-b) & 1 ? "0 " : "1 ")<<endl;
    }
}
