/*
PBL -->  https://www.codechef.com/problems/RCT
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long w,l;
        cin>>w>>l;
        if(w%2==0 or l%2==0)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
