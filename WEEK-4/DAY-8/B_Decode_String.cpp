/*
PBL  -->  https://codeforces.com/contest/1729/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<string>w;
        int sz=s.size()-1;
        int i=0,j=sz;
        while(j>=0)
        {
            if(s[j]!='0')
            {
                w.push_back({s[j]});
                j--;
            }
            else
            {
                w.push_back(s.substr(j-2,2)); // ------- two character together push in string vector w
                j -=3;
            }
        }
         for(int i=w.size()-1; i>=0; i--)
         {
             int x;
             stringstream(w[i])>>x;          //------------string to integer
             int j=1;
             for(char p='a'; p<='z'; p++) // --------Integer to character
             {
                 if(x==j)
                 {
                     cout<<p;
                     j++;
                     break;
                 }
                 j++;
             }
             j=1;
         }
         cout<<endl;
    }
}
