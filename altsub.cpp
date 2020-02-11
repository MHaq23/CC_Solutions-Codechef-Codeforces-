#include<bits/stdc++.h>
using namespace std ;

#define int long long

#define TRACE
#ifndef ONLINE_JUDGE
#define trace(...) __f(#__VA_ARGS__, __VA_ARGS__)

#else
#define trace(...)
#endif

const long long inf = 2e18 ;
const int mod = 1e9 + 7 ;
const int N = 1e5 + 5 ;

signed main()
{
    ios::sync_with_stdio(false) ;
    cin.tie(0) ;
    cout.tie(0) ;
int t;
cin>>t;

while(t--){

int n;
cin>>n;

int a[n],m[n],s=0,temp=0;

    for(int i=0;i<n;i++){
        cin>>a[i];
        s+=a[i];
    }

    for(int i=n-1;i>=0;i--){
        temp+=a[i];
        m[i]=abs(s-2*temp);
    }

    cout<<*max_element(m,m+n)<<endl;

}

return 0 ;
}
