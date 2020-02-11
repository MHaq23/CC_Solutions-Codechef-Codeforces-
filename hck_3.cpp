#include <string>
#include<vector>
#include<bits/stdc++.h>
#include<stdint-gcc.h>
#define ll  long long int
#define lld long long double
#define maxi 10e18
using namespace std;


int main() {

ll n,i;
cin>>n;
 vector<ll> dp(n+1);
 dp[1]=0;
 ll m=1000000007;
 for(i=2;i<=n;i++)
 {
     if(i%2==0)
        dp[i]=((dp[i-1]*3)+3)%m;
     else
        dp[i]=((dp[i-1]*3)-3)%m;
 }
 cout<<dp[n];

    return 0;

}
