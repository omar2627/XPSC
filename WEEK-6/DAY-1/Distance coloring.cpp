/*
PBL -->  https://www.codechef.com/problems/DISTANCECOLO
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int x=min(n,k);
        int ans=1;
        for(int i=1; i<=x; i++)
        {
            ans =ans*i;
        }
        cout<<ans<<endl;
    }
}
