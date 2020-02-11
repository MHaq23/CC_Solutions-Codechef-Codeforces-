#include<bits/stdc++.h>
using namespace std ;

#define int long long


signed main(){

int t;
cin>>t;
while(t--)
{
 int a,b,c,d,k;
 cin>>a>>b>>c>>d>>k;

 int x,y;
if(a%c==0)
    x=floor(a/c);
else
    x=1+floor(a/c);
if(b%d==0)
    y=floor(b/d);
 else
    y=1+floor(b/d);

 if(x+y<=k)
    cout<<x<<" "<<y<<endl;
 else
    cout<<-1<<endl;

}

return  0 ;
}

