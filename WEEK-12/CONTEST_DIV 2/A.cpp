/*
PBL -->
*/


#include<bits/stdc++.h>
using namespace std;
bool is_prime(int x)
{
    for(int i=2; i*i<=x; i++)
    {
        if(x%i==0)
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        bool ans=false;
        int ANS=-1;
        for(int i=0; i<s.size()-1; i++)
        {
            string k ="";
            k +=s[i];
            for(int j=i+1; j<s.size(); j++)
            {
                k +=s[j];
                int a=stoi(k);
                bool b=is_prime(a);
                if(b)
                {
                    ANS=a;
                    ans=true;
                    break;
                }
            }
            if(ans)
            {
                break;
            }
        }
        if(ans)
        {
            cout<<ANS<<endl;
        }
        else
        {
            cout<<-1<<endl;
        }
    }
}
