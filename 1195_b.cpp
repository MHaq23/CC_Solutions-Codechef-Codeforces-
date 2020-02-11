#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

long long sumNat(long m,long k)
{
    if(m*(m+1)/2==k)return k;
    if(m*(m+1)/2<k)
        {   m++;
            sumNat((m)*((m)+1)/2,k);
        }
    else
        return m*(m+1)/2;
}

int main() {

   long long n,k;

   cin>>n>>k;
   long dp[n];

    long long ans=sumNat(1,k)-k;
    cout<<ans;
    return 0;

}
