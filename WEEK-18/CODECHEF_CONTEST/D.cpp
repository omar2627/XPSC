/*
PBL --> https://www.codechef.com/START103D/problems/DIVISIBLEBY8
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        string n1;
        cin>>n>>n1;
        int mod=(n1-'0')%8;
        cout<<(n1-'0')+mod<<endl;

    }
}
