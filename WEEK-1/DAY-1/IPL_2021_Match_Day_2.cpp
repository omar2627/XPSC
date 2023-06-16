/*
problem link --> https://practice.geeksforgeeks.org/problems/deee0e8cf9910e7219f663c18d6d640ea0b87f87/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

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
    int i=0,j=0;
     vector<int>v;
multiset<int>ms;
    while(j<n)
    {
        ms.insert(a[j]);
        if(j<k-1)
        {
            j++;
        }
        else
        {

            v.push_back(*ms.rbegin);
            auto it=ms.find(a[i]);
            ms.erase(it);
            i++;
            j++;
        }
    }
    for(int i=0; i<v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
}
