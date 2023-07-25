/*
PBL  --> https://vjudge.net/contest/571014#problem/A
*/

#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    int cnt=0,cnt1=0;
    for(int i=0; i<n; i++)
    {
        if(s[i]=='a')
        {
            cnt++;
        }
        else
        {
            cnt1++;
        }
    }
    if(cnt==cnt1)
    {
        cout<<0<<endl;
        for(int i=0; i<n; i++)
        {
            cout<<s[i];
        }
    }
    else
    {
      if(cnt>cnt1)
      {
          int x=cnt-(n/2);
          cout<<x<<endl;
          int cnt3=x;
          int cnt4=0;
          for(int i=0; i<n; i++)
          {
              if(i==0 && ans&&s[i]=='a' && cnt4<cnt3  && s[i+1]!='b')
              {
                  cout<<'b';
                  ans=false;
              cnt4++;
              }
              else if(i==n-1&&ans && s[i]=='a' && cnt4<cnt3  && s[i-1]!='b')
              {
                  cout<<'b';
                  cnt4++;
                  ans=false;
              }
              else if(s[i]=='a'&&ans && cnt4<cnt3 && s[i+1]!='b' && s[i-1]!='b')
              {
                  cout<<'b';
                  ans=false;
                  cnt4++;
              }
              else
              {
                  ans=true;
                  cout<<s[i];
              }
          }
      }
      else
      {
                    int x=cnt1-(n/2);
                    cout<<x<<endl;
          int cnt3=x;
          int cnt4=0;
          bool ans=true;
          for(int i=0; i<n; i++)
          {
                            if(i==0 && s[i]=='b' && ans && cnt4<cnt3 && s[i+1]!='a')
              {
                  cout<<'a';
                  ans=false;
              cnt4++;

              }
              else if(i==n-1 && s[i]=='b' &&ans&& cnt4<cnt3  && s[i-1]!='a')
              {
                  cout<<'a';
                  ans=false;
                  cnt4++;

              }
            else  if(s[i]=='b'&&ans && cnt4<cnt3 && s[i-1]!='a' && s[i+1]!='a')
              {
                      cout<<'a';
                      ans=false;
                  cnt4++;

              }
              else
              {
                  ans=true;
                  cout<<s[i];
              }
          }
      }
    }
}
