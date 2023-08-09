/*
PBL --> https://codeforces.com/problemset/problem/158/A?fbclid=IwAR22QXzoipQO1NjA7FRwQ1lAZih04qp4_4zTaRXjI78pzuCMNZppYxlKlbs
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ans=0;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>>x;
        if(x>k)
        {
            ans++;
        }
        else
        {
            continue;
        }
    }
    cout<<ans<<endl;
}
