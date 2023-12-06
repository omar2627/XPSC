/*
PBL -->
OMAR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long days,totalP,every,perW;
        cin>>days>>totalP>>every>>perW;
if(every+perW>=totalP)
{
    cout<<0<<endl;
}
else
{
         long long TW=days/7;
        long long check=TW*7;
        if(check==days)TW--;
        long long ans=perW;
        long long mnD=0;
        for(int i=0; i<TW; i++)
        {
            if(ans<totalP)
            {
                ans +=perW;
                ans +=every;
                mnD++;
            }
        }
        if(ans>=totalP)cout<<(days-mnD)<<endl;
        else
        {
            long long cholbe=days-TW;
            for(int i=0; i<cholbe; i++)
            {
                if(ans<totalP)
                {
                    ans +=every;
                    mnD++;
                }
            }
                if(ans>=totalP)
                {
                    if(mnD==0)
                {
                    cout<<days-1<<endl;
                }
                else
                {
                     cout<<(days-mnD)<<endl;
                }
                }
            else
            {
                cout<<0<<endl;
            }
        }
}

    }
}

