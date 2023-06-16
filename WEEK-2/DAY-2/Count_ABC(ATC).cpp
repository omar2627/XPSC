/*
problem link -->  https://atcoder.jp/contests/abc150/tasks/abc150_b?lang=en
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    string a="ABC";
    int i=0,cnt=0;
    while(i<n)
    {
        if((i+2)<n)
        {
            string x=s.substr(i,3);
            if(a==x)
            {
                cnt++;
                i +=3;
            }
            else
            {
                i++;
                continue;
            }
        }
        else
        {
            break;
        }
    }
    cout<<cnt;
}
