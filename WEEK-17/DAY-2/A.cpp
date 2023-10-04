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
        int a,b,n;
        cin>>a>>b>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)
        {
            cin>>v[i];
        }
        if(a==1&&b==1)
        {
            cout<<1<<endl;
        }
        else
        {

        sort(v.begin(),v.end());
        int ans=0;
        int i=0,val=b,cnt=1;
        while(val>0)
        {
            if(cnt%2!=0 && i<n)
            {
            if(val<=a)
            {

                while(val+v[i]<=a&&i<n)
                {
                    val +=v[i];
                    i++;
                }
                if(i<n&&val<a)
                {
                    int f=val-1;
                    int g=min(a,1+v[i]);
                    f +=g-1;
                    int j=max(a,val-1);
                    if(j>=f)
                    {
                        val +=v[i];
                        i++;
                    }
                }
            if(val==1&&i<n)
            {
                val=v[i];
                i++;
            }
                if(val>a)
                {
                    val=a;
                }
                ans++;
                val -=1;
            }
                cnt++;
            }
            else if(cnt%2==0)
            {
                ans +=val-1;
                val -=(val-1);
                cnt++;
                if(i>=n)break;
            }
        }
        cout<<ans+1<<endl;
        }
    }
}
