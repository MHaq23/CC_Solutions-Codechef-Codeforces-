#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
#include<stdint-gcc.h>
using namespace std;
#define ll  long long int


int main() {

  ll n,k;
  cin>>n>>k;
  ll arr[n];
  ll maxm=INT_MIN;
  ll s=0;
  for(ll i=0;i<n;i++)
  {
      for(int j=0;j<n;j+=k)
      {
        if(arr[j]>0)
        s+=arr[j];
      }
      maxm=max(maxm,s);
  }

   cout<<maxm;


    return 0;

}
