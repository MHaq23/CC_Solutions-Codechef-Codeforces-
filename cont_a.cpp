
#include <string>
#include<vector>
#include<bits/stdc++.h>
#include<stdint-gcc.h>
using namespace std;
#define ll  long long int


int main() {


  int t;
  cin>>t;
  while(t--)
  {
       ll st,in,exp;ll ct=0;
    cin>>st>>in>>exp;

  for(ll i=0;i<=exp && sti > ini;i++)
  {   ll sti=st,ini=in;
      sti+=exp-i;ini+=i;
      if(sti>ini)ct++;
      else
        continue;

  }
    cout<<ct<<endl;
  }


    return 0;

}
