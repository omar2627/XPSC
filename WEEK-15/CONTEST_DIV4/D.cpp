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
        string s;cin>>s;
        int i=0,ans=0;
        while(i<n)
        {
            if(s[i]=='B')
            {
                int x=0;
                while(x<k)
                {
                    i++;
                    x++;
                }
                ans++;
            }
            else
            {
                i++;
            }
        }
        cout<<ans<<endl;
    }
}
