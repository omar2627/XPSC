/*
PBL -->  https://www.codechef.com/START97D/problems/CAESAR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sz;
        string s,t,u;
        cin>>s>>t>>u;
        string k="";
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]<t[i])
            {
                if(t[i]-'a'-s[i]-'a'+u[i]-'a' >'z'-'a')
                {
                    k +=u[i]-'a'+(t[i]-'a')-(s[i]-'a')-('z'-'a');
                }
                else
                {
                    k +=(u[i]-'a')+(t[i]-'a')-(s[i]-'a');
                }
            }
            else
            {
                    k +=(u[i]-'a')+('z'-'a')-(s[i]-'a')+(t[i]-'a');
            }
        }
        cout<<k<<endl;
    }
}
