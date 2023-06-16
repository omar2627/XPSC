/*
problem link -->  https://codeforces.com/problemset/problem/102/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    string k=s;
    int sum=0,cnt=0;
    while(k.size()!=1)
    {
        for(int i=0; i<k.size(); i++)
        {
            sum +=s[i]-'0';
        }
        cnt++;
        s=to_string(sum);
        k=s;
        sum=0;
    }
cout<<cnt;
}
