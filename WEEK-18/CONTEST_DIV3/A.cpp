/*
PBL -->
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        if(x==s)cout<<0<<endl;
        else
        {

            map<char,int>mp,mx;
            for(int i=0; i<n; i++)
            {
                mx[x[i]]++;
            }
            for(int i=0; i<m; i++)
            {
                mp[s[i]]++;
            }
            bool possible=true;
            for(int i=0; i<m; i++)
            {
                if(mx.find(s[i])==mp.end())
                {
                    possible=false;
                    break;
                }
            }
            if(!possible)
            {
                cout<<-1<<endl;
            }
            else
            {
                if(x.size()>=s.size())
                {
                    bool ache=false;
                    for(int i=0; i<=n-m; i++)
                    {
                        string p=x.substr(i,m);
                        if(p==s)
                        {
                            ache=true;
                        }
                    }
                    if(ache)
                    {
                        cout<<0<<endl;
                    }
                    else
                    {
                        bool ans=false;
                        for(int i=(n-m)+1; i<n; i++)
                        {

                        string p =x.substr(i,(n-i)+1);
                        int val=(n-i);
                          p +=x.substr(0,m-val);
                         if(p==s)
                         {
                             ans=true;
                             break;
                         }
                        }
                        if(ans)cout<<1<<endl;
                        else
                        {
                            cout<<-1<<endl;
                        }
                    }
                }
                else
                {
                   int jabo=0;
                   string check=x;
                   for(int i=0; i<5; i++)
                   {
                       check +=check;
                   }

                    bool ache=false;
                    int i1=-1;
                    int jabe=check.size()-m;
                    for(int i=0; i<=jabe; i++)
                    {
                        string p=check.substr(i,m);
                        if(p==s)
                        {
                            ache=true;
                            i1=i;
                            break;
                        }

                    }
                    if(ache && i1+(m-1)<=n)
                    {
                        cout<<0<<endl;
                    }
                    else if(ache)
                    {
                        int val=i1+m,val1=n;
                        for(int i=0; i<5; i++)
                        {
                            val1 +=val1;
                            if(val1>val)
                            {
                                cout<<i+1<<endl;
                                break;
                            }
                        }
                    }
                    else
                    {
                        cout<<-1<<endl;
                    }
                }
            }
        }
    }
}
