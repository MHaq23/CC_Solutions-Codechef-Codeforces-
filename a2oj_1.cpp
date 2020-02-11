#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
#define ll  long long int


int main() {

  int n,ct=0;
  cin>>n;

  for(int i=0;i<n;i++)
  {
      int x,y,z;
      cin>>x>>y>>z;
      if(( x+y+z)>1)ct++;

  }

cout<<ct;
    return 0;

}
