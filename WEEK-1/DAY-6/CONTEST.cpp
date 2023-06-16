/* q=A
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t,p;
    cin>>t;
    while(t--)
    {
     int n;
     cin>>n;
     string s;
     cin>>s;
        string k="";
      char  m=s[0];
      p=0;
        for(int i=1; i<n; i++)
        {
            if(p==i)
            {
                continue;
            }
            if(s[p]==s[i])
            {
               k +=s[i];
                p=i+1;
                m=s[i+1];
            }
        }
      cout<<k<<endl;

    }
    p=0;
}

*/
