/*
PBL  --> https://www.codechef.com/problems/PALIXOR
*/


#include<bits/stdc++.h>
using namespace std;
vector<int>pdm;
bool is_palindrome(int nm)
{
    string s=to_string(nm);
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
            pdm.push_back(i);
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
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        unordered_map<int,int>mp;
        for(int i=0; i<n; i++)
        {
            mp[v[i]]++;
        }

        long long ans=n;
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<pdm.size(); j++)
            {
                int value=v[i]  ^  pdm[j];
                if(mp[value]>=1)
                {
                    ans +=mp[value];
                }
            }
            }
        cout<<ans/2<<endl;
        ans=0;
    }
}

