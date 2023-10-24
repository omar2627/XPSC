/*
PBL -->  https://codeforces.com/contest/1788/problem/B

*OMAR*
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        if(n%2==0)
        {
            cout<<n/2<<" "<<n/2<<endl;
        }
        else
        {
            int rem=n%20;
            if(rem==19)
            {
                string s=to_string(n);
                int sod1=0,sod2=0;
                string a1="";
                string a2="";
                for(int i=0; i<s.size(); i++)
                {
                    int vl1=(s[i]-'0')/2;
                    int vl2=(s[i]-'0')-vl1;
                    if(vl1==vl2)
                    {
                        a1 +=vl1+'0';
                        a2 +=vl2+'0';
                    }
                    else
                    {
                        if(vl1>vl2)swap(vl1,vl2);
                        if(sod1>=sod2)
                        {
                            a2 +=vl2+'0';
                            a1 +=vl1+'0';
                            sod1 +=vl1;
                            sod2 +=vl2;
                        }
                        else
                        {
                            a1 +=vl2+'0';
                            a2 +=vl1+'0';
                            sod1 +=vl2;
                            sod2 +=vl1;
                        }
                    }
                }
                reverse(a1.begin(),a1.end());
                reverse(a2.begin(),a2.end());
                while(a1.back()=='0')a1.pop_back();
                while(a2.back()=='0')a2.pop_back();
                reverse(a1.begin(),a1.end());
                reverse(a2.begin(),a2.end());
                cout<<a1<<" "<<a2<<endl;
            }
            else
            {
                cout<<n/2<<" "<<(n/2)+1<<endl;
            }
        }
    }
}
