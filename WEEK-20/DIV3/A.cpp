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
        string s;cin>>s;
        int ans=0;
        if(s[0]=='0')
        {
            ans +=abs(1-10);
        }
        else
        {
            int vl=s[0]-'0';
            ans +=abs(1-vl);
        }

        for(int i=0; i<3; i++)
        {
            if(s[i]=='0')
            {
                 if(s[i+1]=='0')
                 {
                     continue;
                 }
                 else
                 {
                     int vl=s[i+1]-'0';
                     ans +=(10-vl);
                 }

            }
            else
            {
                if(s[i+1]=='0')
                {
                    int vl=s[i]-'0';
                    ans +=abs(vl-10);
                }
                else
                {
                    int vl1=s[i]-'0',vl2=s[i+1]-'0';
                    ans +=abs(vl1-vl2);
                }

            }
        }
        cout<<ans+4<<endl;
    }
}
