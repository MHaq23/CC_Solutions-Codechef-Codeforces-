#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
#include<stdint-gcc.h>
using namespace std;
#define ll  long long int


int main() {

  int k;
  cin>>k;string s;
  cin>>s;
  map<char,int>m;int f=0;set<char> st;
  for(int i=0;i<s.length();i++)
  {
      m[s[i]]++;st.insert(s[i]);

  }
  for(int i=0;i<s.length();i++)
  {
      if(m[s[i]]%k)f=1;

  }
 if(f==1)cout<<-1;
 else
    for(int i=0;i<k;i++)
  {
      for(set<char>::iterator it =st.begin();it!=st.end();it++)
      {
      cout<<*it;
      }

  }

    return 0;

}
