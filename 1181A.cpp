#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {

    long long x,y,z;

    cin>>x>>y>>z;

    long long ex=0,mx,qx,qy;
    qx=x/z;qy=y/z;
    long long clx,cly;clx=qx*z;cly=qy*z;
    ex=min((x-(clx)),(y-(cly)));

    mx=(x+y)/z;

    cout<<mx<<" "<<ex;

    return 0;

}
