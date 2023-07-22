/*
PBL --> https://www.codechef.com/problems/FIFTYPE
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int x=n,ans=0;
        for(int i=0; i<100; i++)
        {
            if(x>50)
            {
                x=x-3;
                ans++;
            }
            else if(x<50)
            {
                x=x+2;
                ans++;
            }
            else if(x==50)
            {
                break;
            }
        }
        cout<<ans<<endl;
    }
}

