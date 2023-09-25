/*
PBL -->  https://codeforces.com/contest/1882/problem/A
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v(n);
for(int i=0; i<n; i++)
{
    cin>>v[i];
}
if(n==1)
{
    if(v[0]==1)
    {
        cout<<2<<endl;
    }
    else
    {
        cout<<1<<endl;
    }
}
else
{
vector<int>x;
int ans=1;
int i=0;
while(i<n)
{
    if(v[i]!=ans)
    {
        x.push_back(ans);
            i++;
    ans++;
    }
    else if(v[i]==ans)
    {
        x.push_back(ans+1);
        i++;
        ans+=2;
    }
}

int sz=x.size();
      cout<<x[sz-1]<<endl;
}

}

    }



