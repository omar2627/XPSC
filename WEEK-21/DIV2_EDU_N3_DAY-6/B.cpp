

/*
PBL -->
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>v(2*n);
        for(int i=0; i<n*2; i++)cin>>v[i];
sort(v.begin(),v.end());
vector<int>a,b;
for(int i=0; i<n*2; i++)
{
    if(i<n)
    {
        a.push_back(v[i]);
    }
    else
    {
        b.push_back(v[i]);
    }
}
int sz=0;
for(int i=0; i<n-1; i++){
    sz +=abs(a[i]-a[i+1]);
    sz +=abs(b[i]-b[i+1]);
}
cout<<sz<<endl;
for(int i=0; i<n; i++)
{
    cout<<a[i]<<" "<<b[i]<<endl;
}
    }
}


