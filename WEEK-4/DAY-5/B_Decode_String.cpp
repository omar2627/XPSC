/*
PBL -->  https://codeforces.com/contest/1729/problem/B
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
vector<string>c;
int j=s.size()-1;
while(j>=0)
{
    if(s[j]=='0')
    {
        c.push_back(string(1,s[j-2])+s[j-1]);// two char merge and convert string
        j -=3;
    }
    else
    {
        c.push_back(string(1,s[j]));
        j--;
    }
}
for(int i=c.size()-1; i>=0; i--)
{
    int x;
   stringstream(c[i])>>x;//  int to char
   char m=x+'a'-1;
   cout<<m;
}

    }
}
