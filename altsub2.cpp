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

while(t--){

int n;
cin>>n;

int a[n],dp[n]={1},s=0,temp=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    for(int i=n-2;i>=0;i--)
    {
        if(a[i]*a[i+1] < 0)
            dp[i]=dp[i+1]+1;

    }

    for(int i=0;i<n;i++)
        cout<<dp[i]<<" ";
    cout<<endl;


}

return 0 ;
}
