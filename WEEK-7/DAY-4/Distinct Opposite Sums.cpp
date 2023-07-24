/*
PBL -->  https://www.codechef.com/problems/DISTOPPSUMS
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
        int x=n/2;
        for(int i=x; i>=1; i--)
        {
            cout<<i<<" ";
        }
        for(int i=x+1; i<=n; i++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
}
