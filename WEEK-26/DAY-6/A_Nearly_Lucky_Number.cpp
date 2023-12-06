/*
PBL -->
OMAR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    long long cnt=0;
    for(long long i=0; i<s.size(); i++)
    {
        if(cnt>7)break;
        if(s[i]=='7' or s[i]=='4')cnt++;
    }
    if(cnt==7 or cnt==4)cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
