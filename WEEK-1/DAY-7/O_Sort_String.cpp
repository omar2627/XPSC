/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/219856/problem/O

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int frq[26]={0};
    for(int i=0; i<n; i++)
    {
        char ch;
        cin>>ch;
        frq[ch-'a']++;
    }
    for(int i=0; i<26; i++)
    {
        if(frq[i]>0)
        {
            for(int j=0; j<frq[i]; j++)
            {
                cout << char(i + 'a');
            }
        }
    }
}
