/*
PBL --> https://codeforces.com/contest/632/problem/C?fbclid=IwAR3NFTBoMQYAfnq2NWNFz5TOMOyBuFa5P8lwqfj-sGvC9PtEE-sU7MkTmrY
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<string>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    sort(v.begin(),v.end(),[](string a,string b){
        return a+b < b+a;
    });
    for(int i=0; i<n; i++)
    {
        cout<<v[i];
    }
}
