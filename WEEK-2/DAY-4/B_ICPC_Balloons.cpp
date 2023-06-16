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
        int frq[26]={0};
        int ans=0;
        for(int i=0; i<n; i++)
        {
            frq[s[i]-'A']++;
        }
        for(int i=0; i<26; i++)
        {
            if(frq[i]==1)
            {
                ans +=2;
            }
            else if(frq[i]>1)
            {
                ans +=frq[i]+1;
            }
        }
        cout<<ans<<endl;
        ans=0;
    }
}
