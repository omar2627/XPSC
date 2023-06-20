/*
PBL  --> https://codeforces.com/contest/1759/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string k="YesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYesYes";
        int sz=s.size();
        bool ans=false;
        for(int i=0; i<50; i++)
        {
            string a=k.substr(i,sz);
            if(s==a)
            {
                ans=true;
                break;
            }
        }
        if(ans)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }
}
