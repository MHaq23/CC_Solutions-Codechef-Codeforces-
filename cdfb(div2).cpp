#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define vi vector<long long>
#include<sstream>

signed main() {

  int n,ans=0,h=0,b=0;
  cin>>n;
  int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];

    sort(a,a+n);
    if(n&1)
    {
        for(int i=floor(n/2);i<n;i++)
            b+=a[i];
        for(int i=0;i<floor(n/2);i++)
            h+=a[i];
    }
    else{
        for(int i=floor(n/2);i<n;i++)
            b+=a[i];
        for(int i=0;i<floor(n/2);i++)
            h+=a[i];
    }
    ans=b*b+h*h;
    cout<<ans;
return 0;

}
