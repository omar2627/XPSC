/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/I

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int i=0;
    int j=s.size()-1;
    bool ans=true;
    while(j!=0)
    {
        if(s[i]!=s[j])
        {
            cout<<"NO";
            ans=false;
            break;
        }
        i++;
        j--;
    }
    if(ans)
    {
        cout<<"YES";
    }
}
