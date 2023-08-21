/*
PBL --> https://lightoj.com/problem/discovering-permutations
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
  int cs=1;
    while(t--)
    {
        cout<<"Case "<<cs<<":"<<endl;
        int n,k;
        cin>>n>>k;
        vector<char>v;
        int j=1;
        for(char i='A'; i<='Z'; i++)
        {
            if(j<=n)
            {
                v.push_back(i);
                j++;
            }
            else
            {
                break;
            }
        }
        int last=0;
do{
    if(last==k)
    {
        break;
    }
    else
    {
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i];
        }
        cout<<endl;
        last++;
    }
}while(next_permutation(v.begin(),v.end()));
cs++;
    }
}
