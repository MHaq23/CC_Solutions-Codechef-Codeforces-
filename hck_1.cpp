#include <string>
#include<vector>
#include<bits/stdc++.h>
#include<stdint-gcc.h>
#define ll  long long int
#define lld long long double
#define maxi 10e18
using namespace std;


int Count(ll n)
{

    bool hash[n + 1];
    memset(hash, true, sizeof(hash));
    for (int p = 2; p * p < n; p++)
        if (hash[p] == true)
            for (int i = p * 2; i < n; i += p)
                hash[i] = false;

    int tot = 1;
    for (int p = 2; p <= n; p++) {
        if (hash[p]) {


            int count = 0;
            if (n % p == 0) {
                while (n % p == 0) {
                    n = n / p;
                    count++;
                }
                tot = tot * (count + 1);
            }
        }
    }
    return tot;
}

int main()
{
    ll n;
    cin>>n;
    if(Count(n)==4)
        cout<<"YES";
    return 0;
}
