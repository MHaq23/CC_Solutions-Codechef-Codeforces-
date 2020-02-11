#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {

   long long n,k;

   cin>>n>>k;
   long dp[n];

   dp[0]=1;long ct=0,flag,j=0;
   for(long i=1;i<n;i++)
   {
       if(dp[i-1]<=1 && dp[i]!=k )
        dp[i]=dp[i-1]+(j++);
       if(dp[i-1]>1 && dp[i]!=k )
       {dp[i]--;ct++;}

   }
    cout<<ct;
    return 0;

}
