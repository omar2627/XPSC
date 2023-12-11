/*
PBL -->
OMAR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    int cnt=0;
    int p,q;
    while(n--)
    {
        cin>>p>>q;
        if(p<=(q-2))cnt++;
    }
    cout<<cnt<<endl;
}
