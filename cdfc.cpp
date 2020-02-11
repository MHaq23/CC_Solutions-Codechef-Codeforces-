#include<bits/stdc++.h>
using namespace std ;

#define int long long


signed main(){

int n,p,w,d;
int x,y,z;
cin>>n>>p>>w>>d;

/*if(p==0)
    {cout<<0<<" "<<0<<" "<<n<<endl;return 0;}
if(p==(n*w))
    {cout<<n<<" "<<0<<" "<<0<<endl;return 0;}
if(p==(n*d))
    {cout<<0<<" "<<n<<" "<<0<<endl;return 0;}

if(p>(n*w))
    {cout<<-1<<endl;return 0;}*/

  x=floor(p/w);
  y=floor((p-x*w)/d);
  if((x*w+y*d)!=p)
  {cout<<-1<<endl;}
  else
    cout<<x<<" "<<y<<" "<<n-(x+y)<<endl;

return  0 ;
}

