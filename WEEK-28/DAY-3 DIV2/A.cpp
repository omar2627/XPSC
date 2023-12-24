/*
PBL -->
OMAR
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        int a=-1;
      string x="";
      string y="";
      bool ans=true;
        string s=to_string(n);
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='0' && ans or i==0)
            {
                x +=s[i];
            }
            else
            {
                if(i>0)
                {
                    ans=false;
                }
                y +=s[i];
            }
        }
        int m=stoi(x);
        if(m==n)cout<<-1<<endl;
    else
    {

       int p=stoi(y);
        if( m>=p ){
            cout<<-1<<endl;
        }
        else
        {
            cout<<m<<" "<<p<<endl;
        }


    }
}
}
