/*
PBL  -->  https://codeforces.com/contest/1833/problem/C
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        long long a[n];
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        vector<long long>vO;
        vector<long long>vE;
        int cnt1=0,cnt2=0;
        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
            {
                cnt1++;
            }
            else if(a[i]%2!=0)
            {
                cnt2++;
            }
        }
        if(cnt1==n || cnt2==n)
        {
            cout<<"YES"<<endl;
            continue;
        }
            vector<long long>v3;
        for(int i=0; i<n; i++)
        {
            if(a[i]%2!=0)
            {
                v3.push_back(a[i]);
            }
        }
        sort(v3.begin(),v3.end());
        long long minOdd=v3[0];
        if(v3.empty())
        {
            cout<<"NO"<<endl;
        }
        for(int i=0; i<n; i++)
        {
            if(a[i]%2==0)
            {
                vE.push_back(a[i]);
                long long y=a[i]-minOdd;
                vO.push_back(y);
            }
            else
            {
                vO.push_back(a[i]);
                long long x=a[i]-minOdd;
                vE.push_back(x);
            }
        }
        bool ansO=true,ansE=true;
        for(int i=0; i<vO.size(); i++)
        {
            if(vO[i]<=0)
            {
                ansO=false;
                break;
            }
        }
        for(int i=0; i<vE.size(); i++)
        {
            if(vE[i]<=0)
            {
                ansE=false;
                break;
            }
        }
        //cout<<minOdd<<endl;
        if(ansO==true || ansE==true)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    ansO=true;
    ansE=true;
    cnt1=0;
    cnt2=0;
       }
    }

