/*
PBL --> https://codeforces.com/problemset/problem/122/A
OMAR
*/

#include<bits/stdc++.h>
using namespace std;
bool is_lucky(string s)
{
    bool lucky=true;
        for(int i=0; i<s.size(); i++)
        {
            if(s[i]=='4' or s[i]=='7')continue;
            else
            {
                lucky=false;
                break;
            }
        }
        if(lucky)return true;
        else
            return false;
}
int main()
{
    int n;cin>>n;
    string s=to_string(n);
    if(n%4==0 or n%7==0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        if(is_lucky(s))
        {
            cout<<"YES"<<endl;
        }
        else{
          bool lucky=false;
        for(int i=44; i<=(n/2); i++)
        {
            string x=to_string(i);
            if(is_lucky(x))
            {
                if(n%i==0)
                {
                    lucky=true;
                    break;
                }
            }
        }
        if(lucky)cout<<"YES"<<endl;
        else
            cout<<"NO"<<endl;
        }
    }
}
