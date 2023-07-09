/*
PBL --> https://codeforces.com/contest/1426/problem/C
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
        int roott=floor(sqrt(n));
        if(roott*roott>=n)
        {
            cout<<2*roott-2<<endl;
        }
        else if((1+roott)*roott >=n)
        {
            cout<<2*roott-1<<endl;
        }
        else
        {
            cout<<2*roott<<endl;
        }
    }
}
