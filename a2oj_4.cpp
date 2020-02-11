
#include <string>
#include<vector>
#include<bits/stdc++.h>
#include<stdint-gcc.h>
using namespace std;
#define ll  long long int


int main() {

  int n,cx=0,cy=0;
  cin>>n;
map<int,int> m_x,m_y;
  while(n--)
  {
      int x,y;
      cin>>x>>y;
        m_x[x]++;m_y[y]++;
  }

  for(map<int,int>::iterator it=m_x.begin();it!=m_x.end();it++)
  {
      if(it->second >1)cx++;
  }
  for(map<int,int>::iterator it=m_y.begin();it!=m_y.end();it++)
  {
      if(it->second >1)cy++;
  }

  cout<<min(cx,cy);

    return 0;

}
