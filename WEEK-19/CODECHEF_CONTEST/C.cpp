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
    int n,k;cin>>n>>k;
    vector<int>v(n);
    long long sum=0;
    for(int i=0; i<n; i++){
        cin>>v[i];
    }
    for(int i=0; i<n; i++)sum +=v[i];
    if(n>sum)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        if(k==0 && (sum%n)!=0)
        {
            cout<<"NO"<<endl;
        }
        else
        {
            cout<<"YES"<<endl;
        }
    }
}
}

