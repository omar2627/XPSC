/*
PBL -->  https://codeforces.com/contest/1702/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long m;
        cin>>m;
        int j=0;
        while(pow(10,j) <= m)
        {
            j++;
        }
        j=j-1;
        long long ans= abs(m-pow(10,j));
        cout<<ans<<endl;
        j=0;
    }
}
