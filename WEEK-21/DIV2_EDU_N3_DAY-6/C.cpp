/*
PBL --> https://codeforces.com/contest/1895/problem/C
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    vector<string>v;
    string s;
    for(int i=0; i<n; i++)
    {
        cin>>s;
        v.push_back(s);
    }
    int cnt=0;
    for(int i=0; i<n; i++)
    {
        if(v[i].size()%2==0)
        {
            for(int j=i+1; j<n; j++)
            {
                if(v[j].size()%2==0)
                {
                    string a=v[i]+v[j];
                    string b=v[j]+v[i];
                    int sum1=0,sum2=0,sum1b=0,sum2b=0;
                    for(int k=0; k<a.size(); k++)
                    {
                        if(k<a.size()/2)
                        {
                            sum1 +=a[k]-'0';
                        }
                        else
                        {
                            sum2 +=a[k]-'0';
                        }
                    }
                    for(int k=0; k<b.size(); k++)
                    {
                        if(k<b.size()/2)
                        {
                            sum1b+=b[k]-'0';
                        }
                        else
                        {
                            sum2b +=b[k]-'0';
                        }
                    }
                    if(sum1==sum2)cnt++;
                 if(sum1b==sum2b)cnt++;
                }
            }
        }
        else
        {
            for(int j=i+1; j<n; j++)
            {
                if(v[j].size()%2!=0)
                {
                    string a=v[i]+v[j];
                    string b=v[j]+v[i];
                    int sum1=0,sum2=0,sum1b=0,sum2b=0;
                    for(int k=0; k<a.size(); k++)
                    {
                        if(k<a.size()/2)
                        {
                            sum1 +=a[k]-'0';
                        }
                        else
                        {
                            sum2 +=a[k]-'0';
                        }
                    }
                    for(int k=0; k<b.size(); k++)
                    {
                        if(k<b.size()/2)
                        {
                            sum1b+=b[k]-'0';
                        }
                        else
                        {
                            sum2b +=b[k]-'0';
                        }
                    }
               if(sum1==sum2)cnt++;
                  if(sum1b==sum2b)cnt++;
                }
            }
        }
    }
    cout<<cnt+n;
}
