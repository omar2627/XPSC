/* problem link--> https://practice.geeksforgeeks.org/problems/max-sum-subarray-of-size-k5313/1?utm_source=gfg&utm_medium=article&utm_campaign=bottom_sticky_on_article

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
    int i=0,j=0,sum=0,mx=INT_MIN;
    while( j<n )
    {
        sum +=a[j];
        if( j<k-1 )
        {
            j++;
        }
        else
        {
            mx=max(mx,sum);
            sum -=a[i];
            i++;
            j++;
        }
    }
    cout<<mx;
}
