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
        int n;cin>>n;
        string s;cin>>s;
        bool hobe=false;
        int op=0,cnt=0,total=0;
        for(int i=0; i<s.size(); i++)
        {
            if(cnt==3){
                hobe=true;
            }
            if(s[i]=='.')
            {
                total++;
                cnt++;
            }
            else
            {
                cnt=0;
            }
        }
        if(cnt==3)hobe=true;
        if(hobe)cout<<2<<endl;
        else
        {
            cout<<total<<endl;
        }

    }
}
