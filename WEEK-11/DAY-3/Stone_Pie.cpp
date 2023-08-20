/*
PBL -->  https://acm.timus.ru/problem.aspx?space=1&num=1005
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;cin>>n;
    vector<int>v(n);
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
        sum +=v[i];
    }
    int ans=INT_MAX;
for(int i=0; i<n; i++)
{
    int rem=abs(sum-v[i]);
    ans=min(ans,rem);
}
cout<<
    }
}
