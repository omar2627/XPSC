/*
PBL --> https://www.codechef.com/problems/BLOBBYVOLLEY
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
        string s;
        cin>>s;
        int a=0,b=0;
        if(s[0]=='A')
        {
            a++;
        }
        for(int i=1; i<s.size(); i++)
        {
            if(s[i]==s[i-1] && s[i]=='A')
            {
                a++;
            }
            else if(s[i]==s[i-1] && s[i]=='B')
            {
                b++;
            }
            else
            {
                continue;
            }
        }
        cout<<a<<" "<<b<<endl;
        a=0;
        b=0;
    }
}
