#include<bits/stdc++.h>
using namespace std ;

#define int long long

#define TRACE
#ifndef ONLINE_JUDGE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)

#else
#define trace(...)
#endif

const long long inf = 2e18 ;
const int mod = 1e9 + 7 ;
const int N = 1e5 + 5 ;

signed main()
{
    ios::sync_with_stdio(false) ;
    cin.tie(0) ;
    cout.tie(0) ;

    int t;
    cin>>t;

    while(t--)
    {
        int n;cin>>n;
        int a[n];
        int s=0,p=1,z=0,pos=0;
        for(int i=0;i<n;i++)
            {
                cin>>a[i];
                s+=a[i],p*=a[i];
            }
        if(s==0 || p==0)
        {

                for(int i=0;i<n;i++)
                {
                    if(a[i]==0)z++;
                    if(a[i]>0)pos++;
                }
                if(s+z==0)
                    cout<<z+1<<endl;
                else
                    cout<<z<<endl;

        }
        else
            {
            cout<<0<<endl;
        }



    }


return 0 ;
}
