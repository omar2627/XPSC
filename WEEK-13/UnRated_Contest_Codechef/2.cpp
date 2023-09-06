/*
PBL --> https://www.codechef.com/SEP23D/problems/SLOWSTART
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x,h;cin>>x>>h;
        int ans=(x/2)*5;
        if(ans>=h)
        {
            for(int i=1; i<=5; i++)
            {
                if((x/2)*i>=h)
                {
                    cout<<i<<endl;
                    break;
                }
            }
        }
        else
        {
            int dif=h-ans;
            int ans1=floor(dif/x);
            if(dif%x!=0)
            {
                ans1+=1;
            }
            ans1 +=5;
            cout<<ans1<<endl;
        }
    }
}
