/*
problem link -->  https://www.spoj.com/problems/CSUMQ/en/
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int q;
    cin>>q;
    int sum=0;
    while(q--)
    {
        int i,j;
        cin>>i>>j;
        for(int k=i; k<=j; k++)
        {
            sum +=a[k];
        }
        cout<<sum<<endl;
        sum=0;
    }
}
