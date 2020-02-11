#include<bits/stdc++.h>
using namespace std ;

#define int long long


signed main(){

int q;
cin>>q;

while(q--)
{
    int n,ans;cin>>n;double t;
    if(n==2)
        ans=2;
    else
    {
    ans=n%2;
    }

    cout<<ans<<endl;

}

return  0 ;
}

