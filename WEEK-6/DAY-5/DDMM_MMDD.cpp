/*
PBL --> https://www.codechef.com/problems/DDMMORMMDD
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
        string x=s.substr(0,2),y=s.substr(3,2);
        int a,b;
        stringstream(x)>>a;
        stringstream(y)>>b;
        if(a<=12 && b<=12)
        {
            cout<<"BOTH "<<endl;
        }
        else if(a<=12 && b>12)
        {
            cout<<"MM"<<"/"<<"DD"<<"/"<<"YYYY"<<endl;
        }
        else
        {
                        cout<<"DD"<<"/"<<"MM"<<"/"<<"YYYY"<<endl;
        }
    }
}
