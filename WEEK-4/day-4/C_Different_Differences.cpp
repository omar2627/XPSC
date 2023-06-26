/*
PBL -->  https://codeforces.com/contest/1772/problem/C
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int m,n;
        vector<int>v;
        cin>>m>>n;
        int cnt=0,k=0;
        for(int i=1; i<=n; i++)
        {
            if(cnt==m)
            {
                break;
            }
            if(m==n)
            {
                v.push_back(i);
            }
            else
            {
                int a=(i+k);
                int b=(n-a);
                int d=cnt+1;
                int c=(m-d);
                if((i+k)<n && cnt<=m && b>=c)
                {
                    cnt++;
                    v.push_back(a);
                    k +=i;
                }
                else if(cnt<=m)
                {
                    v.push_back((k+1));
                    cnt++;
                    k +=1;
                }
            }

        }
        for(int i=0; i<v.size(); i++)
        {
            cout<<v[i]<<" ";
        }
        cout<<endl;
        k=0;
        cnt=0;
    }
}
