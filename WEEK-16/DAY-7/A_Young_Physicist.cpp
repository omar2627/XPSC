/*
PBL --> https://codeforces.com/problemset/problem/69/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n;cin>>n;
vector<vector<int>>v(n,vector<int>(3));
int val;
for(int i=0; i<n; i++)
{
    for(int j=0; j<3; j++)
    {
        cin>>v[i][j];
    }
}
int s1=0,s2=0,s3=0;
for(int i=0; i<n; i++)
{
    s1 +=v[i][0];
}
for(int i=0; i<n; i++)
{
    s2 +=v[i][1];
}
for(int i=0; i<n; i++)
{
    s3 +=v[i][2];
}
if(s1==0 && s2==0 && s3==0)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
}
