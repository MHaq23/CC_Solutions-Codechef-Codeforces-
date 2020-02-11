#include <string>
#include<vector>
#include<bits/stdc++.h>
#include<stdint-gcc.h>
#define ll  long long int
#define lld long long double
#define maxi 10e18
using namespace std;

ll get_dp(ll dp[][2], ll w, ll K, ll M,
          ll use)
{

    if (w < 0)
        return 0;
    if (w == 0) {
        if (use)
            return 1;
        return 0;
    }
    if (dp[w][use] != -1)
        return dp[w][use];
    int ans = 0;
    for (int i = 1; i <= K; i++) {
        if (i >= M)
            ans += get_dp(dp, w - i,
                         K, M, use | 1);
        else
            ans += get_dp(dp, w - i,
                         K, M, use);
    }
    return dp[w][use] = ans;
}

int main() {

ll n,k,d;
cin>>n>>k>>d;
 ll dp[n + 1][2];
ll m=1000000007;
    memset(dp, -1, sizeof(dp));
    cout << get_dp(dp, n, k, d, 0)%m << endl;


    return 0;

}
