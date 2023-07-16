/*
PBL --> https://www.codechef.com/problems/FAVOURITENUM
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        if(n%2==0 && n%7==0)
        {
            cout<<"ALICE"<<endl;
        }
        else if(n%2!=0 && n%9==0)
        {
            cout<<"BOB"<<endl;
        }
        else
        {
            cout<<"CHARLIE"<<endl;
        }
    }
}
