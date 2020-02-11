
#include <string>
#include<vector>
#include<bits/stdc++.h>
#include<stdint-gcc.h>
using namespace std;
#define ll  long long int


int main() {

  int n,m,val=0;
  cin>>n>>m;
  int a[n];
    for(int i=0;i<n;i++)
    cin>>a[i];
  stack<pair<int,int> > s;


    for(int i=0;i<n;i++)
  {
      if(a[i]>m)s.push({a[i],i+1});
  }
   if(!s.empty())cout<<s.top().second;
   else
    cout<<n;

    return 0;

}
