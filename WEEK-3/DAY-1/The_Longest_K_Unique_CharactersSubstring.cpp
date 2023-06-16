/*
PBL -->  https://practice.geeksforgeeks.org/problems/longest-k-unique-characters-substring0853/1
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int k;
    cin>>k;
    int i=0,j=0,unq=0,ans= -1;
    int n=s.size();
    int frq[26]={0};
    while(j<n)
    {
        char c=s[j];
        if(frq[c-'a']==0)
        {
            unq++;
        }
        frq[c-'a']++;
        if(unq>k)
        {
            while(unq>k)
            {
                char leftC=s[i];
                frq[leftC-'a']--;
                i++;
                if(frq[leftC-'a']==0)
                {
                    unq--;
                }
            }
        }
        if(unq==k)
        {
            ans=max(ans,j-i+1);
        }
        j++;
    }
    cout<<ans;
}
