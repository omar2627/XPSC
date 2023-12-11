/*
PBL --> https://codeforces.com/problemset/problem/41/A
OMAR
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s1,s2;cin>>s1>>s2;
    bool hobe=true;
    int n=s2.size()-1;
    for(int i=0; i<s1.size(); i++)
    {
        if(s1[i]!=s2[n]){
            hobe=false;
            break;
        }
        n--;
    }
    if(hobe && s1.size()==s2.size())
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
