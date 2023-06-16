/*
problem link --> https://codeforces.com/group/MWSDmqGsZm/contest/219432/problem/M

CodeForces
*/
#include<bits/stdc++.h>
using namespace std;
vector<int>v;
void ans1(int a,int b)
{

    for(int i=a; i<=b; i++)
    {
            bool ans=true;
            int num=i;
        while(num!=0)
        {

            int lastDg=num%10;
            num=num/10;
            if(lastDg!=4 && lastDg!=7)
            {
                ans=false;
                break;
            }
        }
        if(ans)
        {
            v.push_back(i);
        }
    }
}
int main()
{
 int a,b;
 cin>>a>>b;
 ans1(a,b);
 if(v.empty())
 {
     cout<<-1;
 }
 else
 {
     for(int i=0; i<v.size(); i++)
     {
         cout<<v[i]<<" ";
     }
 }
}
