/*
problem link -->  https://practice.geeksforgeeks.org/problems/first-negative-integer-in-every-window-of-size-k3345/1

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int a[n+1];
    for(int i=0; i<n; i++)
    {
        cin>>a[i];
    }
    int mx=INT_MIN,i=0,j=0;
    queue<int>q;
    while(j<n)
    {
        if(a[j]<0)
        {
            q.push(a[j]);
        }
        if(j<k-1)
        {
            j++;
        }
        else
        {
            if(q.empty())
            {
                cout<<0<<" ";
            }
            else
            {
                cout<<q.front()<<" ";
            }
            if(a[i]<0)
            {
                q.pop();
            }
            i++;
            j++;
        }
    }
}
