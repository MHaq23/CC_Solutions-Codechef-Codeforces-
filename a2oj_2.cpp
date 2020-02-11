#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
#define ll  long long int


int main() {

  int n,val=0;
  cin>>n;

 while(n--)
  {
    string x;
    cin>>x;
    for(int i=0;i<x.size();i++)
    {
        if(x[i]=='+')val++;
        if(x[i]=='-')val--;    }


  }

cout<<val;
    return 0;

}
