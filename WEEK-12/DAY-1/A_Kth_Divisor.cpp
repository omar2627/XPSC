/*
PBL --> https://codeforces.com/problemset/problem/762/A
*/

#include<bits/stdc++.h>

using namespace std;
int main()
{
long long n,k;cin>>n>>k;
vector<long long>div;
for(int i=1; i*i<=n; i++)
{
    if(n%i==0)
    {
        div.push_back(i);
    }
    if((n/i)!=i)
    {
        div.push_back((n/i));
    }
}
sort(div.begin(),div.end());
if(a.size()<k)
{
    cout<<-1<<endl;
}
else
{
    cout<<a[k-1]<<endl;
}
}
