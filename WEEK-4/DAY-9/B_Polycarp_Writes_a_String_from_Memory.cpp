/*
PBL -->  https://codeforces.com/contest/1702/problem/B
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
        set<char>st;
        int j=0;
        int sz=s.size()-1;
        int ans=0;
       for(int i=0; i<=sz; i++)
       {
           st.insert(s[i]);
           if(st.size()==4)
           {
               ans++;
               st.clear();
               st.insert(s[i]);
           }
       }
       if(st.size()<=3)
       {
           ans++;
       }
        cout<<ans<<endl;
        ans=0;
    }
}
