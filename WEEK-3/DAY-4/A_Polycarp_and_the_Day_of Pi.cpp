/*
PBL  -->  https://codeforces.com/contest/1790/problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pie="314159265358979323846264338327";
        int cnt=0;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]==pie[i])
            {
                cnt++;
            }
            else
            {
                break;
            }
        }
        cout<<cnt<<endl;
    }
}
