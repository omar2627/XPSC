/*
PBL --> https://www.codechef.com/SEP23D/problems/LUCKYSEVEN
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;cin>>s;
    for(int i=0; i<s.size(); i++)
    {
        if(i+1==7)
        {
            cout<<s[i];
            break;
        }
    }
}
