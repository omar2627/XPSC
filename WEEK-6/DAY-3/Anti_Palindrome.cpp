/*
PBL --> https://www.codechef.com/problems/ANTIPALINDR
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
        string s;
        cin>>s;
        int Odd=0,even=0;
        map<char,int>mp;
        for(int i=0; i<n; i++)
        {
            mp[s[i]]++;
        }
   if(mp.size()==1)
   {
       for(auto it:mp)
       {
           if(it.second%2==0)
           {
               cout<<1<<endl;
           }
           else
           {
               cout<<2<<endl;
           }
       }
   }
        else
        {
            for(auto it:mp)
            {
                int x=it.second;
                if(x%2==0)
                {
                    even++;
                }
                else
                {
                    Odd++;
                }
            }
            if(Odd==0)
            {
                cout<<1<<endl;
            }
            else if(Odd==1 && even>=1)
            {
                cout<<1<<endl;
            }
            else
            {
                cout<<0<<endl;
            }
        }
    }
}
