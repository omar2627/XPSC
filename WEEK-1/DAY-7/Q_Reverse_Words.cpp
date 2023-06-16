/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/Q

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string tmp;
    vector<char>words;
    stringstream ss(s);

    while(ss >> tmp)
    {
        int sz=tmp.size();
        for(int i=sz-1; i>=0; i--)
        {
            words.push_back(tmp[i]);
        }
         words.push_back(' ');
    }
    words.pop_back();
    for(int i=0; i<words.size(); i++)
    {
        cout<<words[i];
    }
}
