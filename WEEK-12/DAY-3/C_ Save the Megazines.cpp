/*
PBL -->  https://codeforces.com/problemset/problem/1743/C
*/

/*
ekta 1 ke chaile bam e nite parbo i-1 e

0 0 1 1 1 0
3 5 2 7 6  5

5,2,7,6 egular modde min ta ke badh dibo max gulake nibo karon 6,7,2 value gula 1,2,3,4 idx er modde thakbe jehetu every element i-1 porjonto jete
parbe jodi i-1 idx 0 hoi tahole jehetu 1 idx value 0 tai 2 er cata 5 er modde chole jabe 7 er ta 2 te 6 er ta 7 e tahole sum=5+2+7=14
2+7+6=15
jodi sata exchange na hoi tahole max sum hoi ja holo 15
*/
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>a(n);
        string v;
        cin>>v;
        for(int i=0; i<n; i++)
        {
            cin>>a[i];
        }
        int ans=0;
        if(v[0]=='1')
        {
            ans +=a[0];
            int mn=INT_MAX;
            for(int i=n-1; i>=1; i--)
            {
                if(v[i]=='1')
                {
                    mn=min(mn,a[i]);
                    ans +=a[i];
                }
                else  // jodi 0 pai seta shoho count kore minimum ta badh diye dibo
                {
                    if(mn<INT_MAX) // jodi ager gula zero hoi tahole if er modde giye lab nai zero hole mn=INT_MAX hobe tai ei condition dewa
                    {
                        ans +=a[i];  // zero tomo value add kora
                        mn=min(mn,a[i]);// ager min theke zero tomo value min kina ta check kora jehetu amdr 1 shoho tarporer zero element er modde min value ke subtract korte hobe
                        ans -=mn;
                        mn=INT_MAX;
                    }
                }
            }
        }
        else
        {
            int mn=INT_MAX;
            for(int i=n-1; i>=0; i--)
            {
                if(v[i]=='1')
                {
                    mn=min(mn,a[i]);
                    ans +=a[i];
                }
                else
                {
                    if(mn<INT_MAX)
                    {
                        ans +=a[i];
                        mn=min(mn,a[i]);
                        ans -=mn;
                        mn=INT_MAX;
                    }
                    else
                    {
                        continue;
                    }
                }
            }
        }

        cout<<ans<<endl;
    }
}
