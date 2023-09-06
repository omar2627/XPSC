/*
PBL --> https://codeforces.com/contest/1861/problem/C
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        string s;cin>>s;
        int n=s.size();
        vector<int>all; // 0,1,2 esob maintain korar jonno all array declare kora
        // 1--> sorted
        // 2--> maybe
        // 0--> unsorted
        bool x=false;
        for(int i=0; i<n; i++)
        {
            if(s[i]=='1')
            {
                if(all.empty())continue;
                if(all.back()==0)
                {
                    cout<<"NO"<<endl;
                    x=true;
                    break;
                }
                for(int j=(int)all.size()-1; j>=0; j--) // jotokkon na porjonto 2 pete thakbo totokkon porjonto 1 diya replace korte thakbo
                {
                    if(all[j]==2)
                    {
                        all[j]=1;
                    }
                    else
                    {
                        break;
                    }
                }
            }
            else if(s[i]=='0') //last array er last element jodi 1 hoi tahole no hobe 2 hole 2 ke 0 diye replace korbo porer gula 0 hobe jotokkon na porjonto array last element 0 pai
            {
                if(all.empty() or all.back()==1)
                {
                    cout<<"NO"<<endl;
                    x=true;
                    break;
                }
                all.back()=0; // last element zero diye replace korlam jehetu last element 2 cilo
            }
            else if(s[i]=='+')
            {
                if(all.empty())
                {
                    all.push_back(1);// first element er ketre 1 boshbe karon array te ekta element thakle always sorted thakbe
                }
                else
                {
                    if(all.back()==1)
                    {
                        all.push_back(2);
                    }
                    else // last element 2 or 0 hole tai push korte thakbo
                    {
                        all.push_back(all.back());
                    }
                }
            }
            else // minus er ketre pop_back korbo
            {
                all.pop_back();
            }
        }
        if(!x)
        {
            cout<<"YES"<<endl;
        }
    }
}
