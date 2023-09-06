/*
PBL --> https://codeforces.com/contest/1863/problem/D
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
        vector<string>s(n);
        for(int i=0; i<n; i++)
        {
            cin>>s[i];
        }
        bool find_ans=false;
        // ans -1 hobe kina ta row and column borabor loop chaliye check korbo

        // row borabor traverse kore vertically koita ace U or D odd hole ans -1 row borabor horizontal placed dominoes check korar dorkar nai karon segula ekta w hole onno ta B hobei

        for(int i=0; i<n; i++)
        {
            int is_negative=0;
            for(int j=0; j<m; j++)
            {
                if(s[i][j]=='U' or s[i][j]=='O')
                {
                    is_negative++;
                }
            }
            if(is_negative%2)
            {
                find_ans=true;
                cout<<"-1"<<endl;
                break;
            }
        }
        // column borabor traverse kore dekbo horizontal L,R count koita ace

        if(find_ans==false)
        {
            for(int i=0; i<m; i++)  //total column -> m
            {
                int is_negative=0;
                for(int j=0; j<n; j++)
                {
                    if(s[j][i]=='L' or s[j][i]=='R')
                    {
                        is_negative++;
                    }
                }
                if(is_negative%2)
                {
                    find_ans=true;
                    cout<<"-1"<<endl;
                    break;
                }
            }

        }
         if(find_ans==false)
        {

            // row and column borabor grid er cell gulake Coloring korbo

            vector<string>ans=s;
            vector<vector<bool>>vis(n,vector<bool>(m,false)); // grid er cell gula color hoise naki ta check korbo jesob cell color hobe segulake color korar dorkar nai

            // Row borabor traverse korbo tai vertically jegulo ace up and down seguloke color korbo

            for(int i=0; i<n; i++) // total row--> n
            {
                int col=0; // duita cell er color jate same na hoi tar jonno ei variable
                for(int j=0; j<m; j++)
                {
                    if(vis[i][j])continue;
                    if(s[i][j]=='U')
                    {
                        vis[i][j]=1;
                        vis[i+1][j]=1;
                        if(col==0)
                        {
                            ans[i][j]='W';// up er color w dilam tai down er color black dilam
                            ans[i+1][j]='B';// down er color shate shate kore pellam
                        }
                        else
                        {
                            ans[i][j]='B';
                            ans[i+1][j]='W';
                        }
                        col^=1; // same jate na hoi first e jodi col=0 hoi second e color jegula korbo sugula sate same nahoi tar jonno xor operation 0^1=1 then, 1^1=0
                    }
                }
            }

            // column borabor coloring korbo


            for(int i=0; i<m; i++) // total column --> m
            {
                int col=0;
                for(int j=0; j<n; j++)
                {
                    if(vis[j][i])continue;
                    if(s[j][i]=='L')
                    {
                        vis[j][i]=1;
                        vis[j][i+1]=1;
                        if(col==0)
                        {
                            ans[j][i]='W';
                            ans[j][i+1]='B';
                        }
                        else
                        {
                            ans[j][i]='B';
                            ans[j][i+1]='W';
                        }
                        col^=1;
                    }
                }
            }
            for(int i=0; i<n; i++)
            {
                cout<<ans[i]<<endl;
            }
        }
    }
}
