/*
PBL -->  https://onlinejudge.org/index.php?option=com_onlinejudge&Itemid=8&page=show_problem&problem=2408&fbclid=IwAR02obU23CMTuMGRzOk39uLr8jyOLLiNYj6-aSgXTmro59FeYR2HRLGXzAk
*/


#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,m;
while(cin>>n>>m)
{
        vector<int>v(n);
    for(int i=0; i<n; i++)
    {
        cin>>v[i];
    }
    int mx=0;
    for(int i=0; i<n; i++)
    {
        mx=max(mx,v[i]);
    }
    int l=mx,r=INT_MAX,ans;
    while(l<=r)
        {
            int cap=l+(r-l)/2;
            int cnt=1,sum=0;
            for(int i=0; i<n; i++)
            {
                if(sum+v[i]<=cap)
                {
                    sum +=v[i];
                }
                else
                {
                    sum=v[i];
                    cnt++;
                }
            }
            if(cnt<=m)
            {
                ans=cap;
                r=cap-1;
            }
            else
            {
                l=cap+1;
            }
        }
        cout<<ans<<endl;
}
}
