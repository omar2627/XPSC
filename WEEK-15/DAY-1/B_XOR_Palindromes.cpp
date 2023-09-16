/*
PBL -->
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;cin>>n;
        string s;cin>>s;
        int pairr=0,minSetBit=0;
        int i=0,j=n-1;
        while(i<j)
        {
            if(s[i]==s[j])
            {
                pairr +=2;
            }
            else
            {
                minSetBit++;
            }
            i++;
            j--;
        }

        cout<<pairr<<" "<<minSetBit<<endl;
        vector<int>ans;
        for(int i=0; i<=n; i++)
        {
            if(i<minSetBit)
            {
              ans.push_back(0);
            }
            else
            {
                if(pairr+minSetBit>=i)
                {
                    if(n%2!=0 && i%2!=0)
                    {
                        ans.push_back(1);
                    }
                    else if(i%2==0)
                    {
                        ans.push_back(1);
                    }
                    else
                    {
                        ans.push_back(0);
                    }
                }
                else
                {
                    ans.push_back(0);
                }
            }
        }
        for(int i=0; i<ans.size(); i++)
        {
            cout<<ans[i];
        }
        cout<<endl;
    }
}
