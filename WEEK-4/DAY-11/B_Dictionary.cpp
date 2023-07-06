/*
PBL -->  https://codeforces.com/contest/1674/problem/B
*/

#include<bits/stdc++.h>
using namespace std;
vector<string>s;
void str()
{
    for(char i='a'; i<='z'; i++)
    {
        for(char j='a'; j<='z'; j++)
        {
            if(i!=j)
            {
                s.push_back(string(1,i)+j);
            }
        }
    }
}
int main()
{
    str();
    int t;
    cin>>t;
    while(t--)
    {
      string a;
      cin>>a;
      for(int i=0; i<s.size(); i++)
      {
          if(s[i]==a)
          {
              cout<<i+1<<endl;
          }
      }
    }
}
