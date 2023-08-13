/*
PBL --> https://codeforces.com/contest/1592/problem/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        long long h;
        cin>>n>>h;
        vector<long long>v(n);
for(int i=0; i<n; i++)
{
    cin>>v[i];
}
        sort(v.begin(),v.end());
int idx=n-1;
long long sum=v[idx]+v[idx-1];
long long cnt=floor(h/sum);
long long ans=h-(cnt*sum);
if(ans<=v[idx] && ans>0)
{
    cnt *=2;
    cnt +=1;
    cout<<cnt<<endl;
}
else if(ans==0)
{
    cnt *=2;
    cout<<cnt<<endl;
}
else
{
    cnt *=2;
    cnt +=2;
    cout<<cnt<<endl;
}
    }
}
