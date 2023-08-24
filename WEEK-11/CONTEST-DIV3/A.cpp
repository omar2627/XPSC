/*
PBL -->
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m;
        cin>>n>>m;
        char a[n][m];
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                cin>>a[i][j];
            }
        }
        int idX=0,idx=INT_MAX,idxK=0,idxA=0;
        for(int i=0; i<n; i++)
        {
           if(a[i][0]=='v')
           {
               idX=1;
           }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=1; j<m; j++)
            {
                if(a[i][j]=='i')
                {
                    idx=min(idx,j);

                }
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=2; j<m; j++)
            {
              if(a[i][j]=='k')
              {
                  if(idx<j)
                  {
                      idxK=j;
                      break;
                  }
              }
            }
            if(idx<idxK)
            {
                break;
            }
        }
        for(int i=0; i<n; i++)
        {
            for(int j=0; j<m; j++)
            {
                if(a[i][j]=='a')
                {
                    if(idxK<j)
                    {
                        idxA=j;
                        break;
                    }
                }

            }
            if(idxK<idxA)
            {
                break;
            }
        }
if(idX==1 && idx>0  && idx<idxK && idxK<idxA)
{
    cout<<"YES"<<endl;
}
else
{
    cout<<"NO"<<endl;
}
}
}
