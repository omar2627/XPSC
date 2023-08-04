/*
PBL --> https://codeforces.com/contest/845/problem/C
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    map<int,long long>prefix;
    for(int i=1; i<=n; i++)
    {
     int l,r;cin>>l>>r;
        prefix[l]++;
        prefix[r+1]--;
    }
    long long sum=0;
    bool ans=true;
    for(auto [idx,value]:prefix)
    {
        sum +=value;
        if(sum>2)
        {
            ans=false;
            break;
        }
    }
    if(ans)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
