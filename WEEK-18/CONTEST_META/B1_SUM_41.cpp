/*
PBL -->
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
int pos;cin>>pos;
int n;cin>>n;
int a[n+1];
for(int i=0; i<n; i++)
{
    cin>>a[i];
}
for(int i=pos; i<n-1; i++)
{
    a[i]=a[i+1];
}

for(int i=0; i<n-1; i++)cout<<a[i]<<" ";
}
