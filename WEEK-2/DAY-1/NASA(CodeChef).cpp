/*
problem link -->  https://www.codechef.com/problems/PALIXOR

*/

#include<bits/stdc++.h>
using namespace std;
vector<int>pal;
bool is_palindrome(int x)
{
    string s=to_string(x);
    int i=0,j=s.size()-1;
    while(i<j)
    {
        if(s[i]!=s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
void palindrome()
{
    for(int i=0; i<=(1<<15); i++)
    {
        if(is_palindrome(i))
        {
            pal.push_back(i);
        }
    }
}

int main()
{
    palindrome();
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        unordered_map<int,int>mp;

        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            mp[a[i]]++;
        }
        long long cnt=n;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<pal.size(); j++)
            {
                int value=a[i]  ^ pal[j];
                if(mp[value]>=1)
                {
                    cnt +=mp[value];
                }
            }
        }
        cout<<cnt/2<<endl;
        cnt=0;
    }
}
