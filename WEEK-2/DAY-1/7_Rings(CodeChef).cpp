/*
problem link --> https://www.codechef.com/problems/SEVENRINGS
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N,X;
        cin>>N>>X;
        int total_bill=N*X;
        if(total_bill >= 10000 && total_bill <= 99999)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
