/*
PBL -->  https://codeforces.com/contest/1690/problem/B
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
        vector<int>a(n),b(n);
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        for(int i=0; i<n; i++)
        {
            cin>>b[i];
        }
int dif=-1,zdif=-1;
bool ans=false;
for(int i=0; i<n; i++)
{
    if(a[i]<b[i])
    {
        ans=true;
        break;
    }
    if(b[i]!=0)
    {
        if(dif==-1)
        {
            dif=a[i]-b[i];
        }
        else
        {
            if(a[i]-b[i]!=dif)
            {
                ans=true;
                break;
            }
        }
    }
    else
    {
        zdif=max(zdif,a[i]-b[i]);
    }
}
if(ans)
{
    cout<<"NO"<<endl;
    continue;
}
if(dif==-1 || zdif<=dif)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}

    }
}

