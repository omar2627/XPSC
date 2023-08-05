/*
PBL -->  https://codeforces.com/problemset/problem/1747/B
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
      int n;
      cin>>n;
       string k="";
       vector<pair<int,int>>v;
        for(int i=0; i<n; i++)
        {
            k +="BAN";
        }
        int op=0;
        int i=0,j=n*3-1;
        while(i<j)
        {
            if(k[i]=='B' && k[j]=='N')
            {
                op++;
                v.push_back({i+1,j+1});
                i++;
                j--;
            }
            else if(i==j)
            {
                break;
            }
            else
            {
                i++;
                j--;
            }
        }
        cout<<op<<endl;
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i].first<<" "<<v[i].second<<endl;
        }
    }
}
