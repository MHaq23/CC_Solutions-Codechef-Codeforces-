#include<bits/stdc++.h>
using namespace std ;

#define int long long
const int n=100000;
signed main(){

int q;
cin>>q;
while(q--)
{
   int x,y,f=0;
   cin>>x>>y;
   bool prime[n+1];
    memset(prime, true, sizeof(prime));
    for (int p=2; p*p<=n; p++)
    {

        if (prime[p] == true)
        {

            for (int i=p*p; i<=n; i += p)
                prime[i] = false;
        }
    }

    for(int i=2;i<=n;i++)
    {
        if((x-y)%prime[i]==0)
        {
            cout<<"Yes"<<endl; f=1;break;
        }
    }
    if(f==0)cout<<"No"<<endl;
}

return  0 ;
}

