/*
problem link --> https://codeforces.com/problemset/problem/535/B

*/

#include<bits/stdc++.h>
using namespace std;
vector<long long>ans;
void always(int n,string s="")
{
    if(n==0)
    {
        long long i=0;
        long long temp=0;

        while(i!=s.size())
        {
            temp=temp*10+s[i]-'0';
            i++;
        }
        ans.push_back(temp);
        return;
    }
    always(n-1,s+'4');
    always(n-1,s+'7');
}
int main()
{
    long long n;
    cin>>n;
    for(int i=1; i<=9; i++)
    {
        always(i);
    }
    for(int i=0; i<=ans.size(); i++)
    {
        if(ans[i]==n)
        {
            cout<<i+1;
        }
    }
}
