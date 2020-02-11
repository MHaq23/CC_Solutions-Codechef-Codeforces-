#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
#include<stdint-gcc.h>
using namespace std;
#define ll  long long int


int main() {

  int q;
  cin>>q;

  while(q--)
  {
      ll n,m;
      cin>>n>>m;ll s=0;


  for(ll i=1;i<=n;i++)
  {
    if(m*i<=n)
    {
        if(i>9)
        s+=(i%10);
        else
        s+=i;}
  }

  cout<<s<<endl;


  }
    return 0;

}
