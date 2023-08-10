

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,k;
    cin>>n>>k;
    int ans=0;
   int ans2=0;
    for(int i=1; i<=n; i++)
    {
        int x;
        cin>>x;
if(i<=k)
{ans=x;}
else if(x>=ans && x>0)
{ans2++;}
}
cout<<ans2<<endl;
}

