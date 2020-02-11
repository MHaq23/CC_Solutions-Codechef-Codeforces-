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

    int a[t];

    for(int i=0;i<t;i++)
        cin>>a[i];

    sort(a,a+t);

    for(int i=t-1;i>=0;i--)
        cout<<a[i]<<" ";




return 0 ;
}
