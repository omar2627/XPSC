/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/326907/problem/D

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long Left,Right;
        cin>>Left>>Right;
        if(Left>Right)
        {
            swap(Left,Right);
        }
        Left=Left-1;
        long long ans=(Right*(Right+1))/2 - (Left*(Left+1))/2 ;
        cout<<ans<<endl;
    }
}
