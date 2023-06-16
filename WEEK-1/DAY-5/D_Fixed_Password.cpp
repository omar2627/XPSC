/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/D

*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    while(true)
    {
        string s;
        cin>>s;
        int a=1999;
        string str=to_string(a);
        if(s==str)
        {
            cout<<"Correct";
            break;
        }
        else
        {
            cout<<"Wrong"<<endl;
        }
    }
}
