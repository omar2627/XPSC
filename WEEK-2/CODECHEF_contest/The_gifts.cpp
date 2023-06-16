/*
problem link --> https://www.codechef.com/START94D/problems/CS2023_GIFT

 */

 #include<bits/stdc++.h>
 using namespace std;
 int main()
{
    int x,n,m;
    cin>>x>>n>>m;
    if(x>=n)
    {
        cout<<"YES"<<endl;
    }
    else if(x+m >=n)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}
