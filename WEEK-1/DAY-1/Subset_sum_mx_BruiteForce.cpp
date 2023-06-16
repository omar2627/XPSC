
/* worst case e TC=O(n*k) hoi
if n=1000 k=1 hoi tahole outer loop n-k=1000-1=999 mane jetake n dhora jai
    inner loop e k times cholbe

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
    int mx=INT_MIN;
    for(int i=0; i<=n-k; i++)
       {
          int sum=0;
           for(int j=i; j< i+k; j++)
           {
               sum +=a[j];
           }
           mx=max(mx,sum);

       }
       cout<<mx<<endl;
       return 0;
}
