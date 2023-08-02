/*
PBL --> https://codeforces.com/contest/1462/problem/C
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int x;
        cin>>x;
        if(x<=10)
        {
            cout<<x<<endl;
        }
        else
        {
            if(x>45)
            {
                cout<<-1<<endl;
            }
            else
            {
                    vector<int>v;
                    int m=x,n=9;
                    while(m!=0)
                    {
                        if(m>n)
                        {
                            v.push_back(n);
                            m=m-n;
                            n--;
                        }
                        else
                        {
                            n--;
                        }
                    }
                    sort(v.begin(),v.end());
                    for(int i=0; i<v.size(); i++)
                    {
                        cout<<v[i];
                    }
                    v.clear();
            }
        }
        cout<<endl;
    }
}
