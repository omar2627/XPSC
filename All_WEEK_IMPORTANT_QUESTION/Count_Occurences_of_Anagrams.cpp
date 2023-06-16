/*
problem link --> https://practice.geeksforgeeks.org/problems/count-occurences-of-anagrams5839/1

*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
  string txt,pat;
  cin>>txt>>pat;
  int n=txt.size();
  int k=pat.size();
  int i=0,j=0;
  int frq1[26]={0};
  int frq2[26]={0};
  for(int i=0; i<k; i++)
  {
      frq1[pat[i]-'a']++;
  }
  int ans=0;
  while(j<n)
  {
      frq2[txt[j]-'a']++;
      if(j<k-1)
      {
          j++;
      }
      else
      {
          bool flage=true;
          for(int v=0; v<26; v++)
          {
              if(frq1[v]!=frq2[v])
              {
                  flage=false;
                  break;
              }
          }
          if(flage)
          {
              ans++;
          }
          frq2[txt[i]-'a']--;
          i++;
          j++;
      }
  }
  cout<<ans;
}
