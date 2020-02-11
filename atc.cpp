#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {

   int n;cin>>n;
vector<int> p;
    for(int i=0;i<n;i++)
        {   long h;

        cin>>h;
            p.push_back(h);
        }
        int dp[n+1];dp[0]=0;
    for(int i=1;i<=n;i++)
    {
        dp[i]=dp[i-1]+min(abs(p[i-1]-p[i]),abs(p[i-1]-p[i+1]));
    }
    cout<<dp[n];

    return 0;
    }



