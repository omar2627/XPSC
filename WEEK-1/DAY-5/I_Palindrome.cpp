/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/I

*/
#include<bits/stdc++.h>
using namespace std;
bool isPalindrome(string s)
{
    int i=0;
    int j=s.size()-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
int main()
{
    string s;
    cin>>s;

    bool ans=isPalindrome(s);
    if(ans)
    {
        int x=0;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i]!='0')
            {
                x=i;
                break;
            }
        }
        for(int i=x; i>=0; i--)
        {
            cout<<s[i];
        }
        cout<<endl;
        cout<<"YES";
    }
    else
    {
        int x=0;
        for(int i=s.size()-1; i>=0; i--)
        {
            if(s[i]!='0')
            {
                x=i;
                break;
            }
        }
        for(int i=x; i>=0; i--)
        {
            cout<<s[i];
        }
        cout<<endl;
        cout<<"NO";
    }
}
