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
        map<int,string>v;
              for(int i=0; i<10; i++)
        {
            for(int j=0; j<10; j++)
            {
                cin>>v[i][j];
            }
        }
        int cnt1=0;
for(int i=0; i<10; i++)
{
    if(v[0][i]=='X')
    {
        cnt1++;
    }
        if(v[i][9]=='X' && i>0 && i<9)
    {
        cnt1++;
    }
        if(v[i][0]=='X' && i>0)
    {
        cnt1++;
    }
       if(v[9][i]=='X' && i>0)
    {
        cnt1++;
    }
}
int cnt2=0;
for(int i=1; i<9; i++)
{
    if(v[1][i]=='X')
    {
        cnt2++;
    }
        if(v[i][8]=='X' && i>1 && i<8)
    {
        cnt2++;
    }
        if(v[i][1]=='X' && i>1)
    {
        cnt2++;
    }
       if(v[8][i]=='X' && i>1)
    {
        cnt2++;
    }
}
int cnt3=0;
for(int i=2; i<8; i++)
{
    if(v[2][i]=='X')
    {
        cnt3++;
    }
        if(v[i][7]=='X' && i>2 && i<7)
    {
        cnt3++;
    }
        if(v[i][2]=='X' && i>2)
    {
        cnt3++;
    }
       if(v[7][i]=='X' && i>2)
    {
        cnt3++;
    }
}
int cnt4=0;
for(int i=3; i<7; i++)
{
    if(v[3][i]=='X')
    {
        cnt4++;
    }
        if(v[i][6]=='X' && i>3 && i<6)
    {
        cnt4++;
    }
        if(v[i][3]=='X' && i>3)
    {
        cnt4++;
    }
       if(v[6][i]=='X' && i>3)
    {
        cnt4++;
    }
}
int cnt5=0;
for(int i=4; i<6; i++)
{
    if(v[4][i]=='X' )
    {
        cnt5++;
    }
        if(v[i][5]=='X' && i>4 && i<5)
    {
        cnt5++;
    }
        if(v[i][4]=='X' && i>4)
    {
        cnt5++;
    }
       if(v[5][i]=='X' && i>4)
    {
        cnt5++;
    }
}
int ans=(cnt1*1)+(cnt2*2)+(cnt3*3)+(cnt4*4)+(cnt5*5);
cout<<ans<<endl;
    }
}
