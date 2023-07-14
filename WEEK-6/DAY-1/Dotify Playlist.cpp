/*
PBL -->  https://www.codechef.com/problems/DOTIFYPLAY
*/



#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k,l;
        cin>>n>>k>>l;
        vector<int>v;
        for(int i=0; i<n; i++)
        {
            int m,L;
            cin>>m>>L;
            if(L==l)
            {
                v.push_back(m);
            }
        }
       sort(v.begin(),v.end(),greater<>());
       int ans=0;
       if(v.size()>=k && v.size()>0)
       {
           for(int i=0; i<k; i++)
           {
               ans +=v[i];
           }
           cout<<ans<<endl;
       }
       else
       {
           cout<<-1<<endl;
       }
}
    }

