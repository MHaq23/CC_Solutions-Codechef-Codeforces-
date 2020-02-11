
#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
#include<stdint-gcc.h>
using namespace std;
#define ll  long long int

int main() {

long long n,p,q,r;
cin>>n>>p>>q>>r;
long long a[n];
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
long long x=-3e18,y=-3e18,z=-3e18;
for(int i=0;i<n;i++)
{
    x=max(x,p*a[i]);
    y=max(y,x+q*a[i]);
    z=max(z,y+r*a[i]);

}
cout<<z;

    return 0;

}

