#include<bits/stdc++.h>
using namespace std ;

#define int long long


signed main(){

int t;
cin>>t;
int cpy=t;
int a[t],i=0;int alt_0=1,alt_1=1;
while(t--)
{
    int n;
    cin>>n;
    a[i]=n;
    i++;
}
float b[cpy];
for(int i=0;i<cpy;i++)
{
    if(a[i]%2==0)
        b[i]=a[i]/2;
    else if(a[i]==0)
        b[i]=0;
    else
    {
       if(a[i]>0)
       b[i]= (alt_0&1) ? floor(a[i]/2):(floor(a[i]/2)-1);
       else
        b[i]= (alt_1&1) ? floor(a[i]/2):(floor(a[i]/2)+1);
       //b[i]=alt&1 ? 1+a[i]/2+0.5:1+a[i]/2-0.5;
       alt_0++,alt_1++;
    }
}

for(int i=0;i<cpy;i++)
    {
        cout<<b[i]<<endl;
    }

return  0 ;
}

