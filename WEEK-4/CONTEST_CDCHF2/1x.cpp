/*
PBL --> https://www.codechef.com/START97A/problems/NOPALINDROME
*/

#include<bits/stdc++.h>
using namespace std;
int n,k;
vector<long long>pal;
bool is_palindrome(long long x)
{
    string s=to_string(x);
    int i=0,j=s.size()-1;
    while(i<=j)
    {
        if(s[i]!=s[j])
        {
            return false;
        }
        i++;
        j--;
    }
    return true;
}
void palindrme()
{
    for(long long i=1; i<=1e9; i++)
    {
        if(is_palindrome(i))
        {
            string o=to_string(i);
                         pal.push_back(i);
            if(o.size()==n)
            {
                int m;
     stringstream(o)>>m;
     if(m>k)
     {
         break;
     }
            }
        }
    }
}
int main()
{
    palindrme();
    int t;
    cin>>t;
    while(t--)
    {
        cin>>n>>k;
int q,sum=0;
long long x=pal[pal.size()-1];
long long p=x;
 while(p>0)
 {
     int g=p%10;
     sum +=g;
     p=p/10;
 }

 cout<<sum<<endl;
    }
}
