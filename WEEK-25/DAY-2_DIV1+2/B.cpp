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
        int op=0,cnt=0;
        for(int i=0; i<s.size()-1; i++)
        {
            if(s[i]=='A' && s[i+1]!='B')
            {
                cnt++;
            }
            else if(s[i]=='A')
            {
                cnt++;
                swap(s[i],s[i+1]);
                op +=cnt;
                cnt=0;
            }
        }
        cout<<op<<endl;
    }
}
