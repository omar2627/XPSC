/*
problem link --> https://atcoder.jp/contests/abc222/tasks/abc222_a?lang=en
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int sz=s.size();
    int total_zero=4-sz;
    for(int i=0; i<total_zero; i++)
    {
        cout<<0;
    }
    cout<<s;
}
