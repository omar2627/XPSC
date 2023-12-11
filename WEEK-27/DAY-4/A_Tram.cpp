/*
PBL --> https://codeforces.com/problemset/problem/116/A
OMAR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int ache=0, p,q, ans=0;
    while(n--)
    {
        cin>>p>>q;
        ache -=p;
        ache +=q;
        ans=max(ans,ache);
            }
            cout<<ans<<endl;
}
