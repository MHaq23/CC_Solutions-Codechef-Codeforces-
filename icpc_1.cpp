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

   int t;
   cin>>t;

   while(t--)
   {
    string s;
    cin>>s;
    string org=s;
    vi v;
    int minm=INT_MAX;

    for(int i=0;i<s.length();i++)
    {
        s.erase(s.begin()+i);
        stringstream g(s);
        int x=0;
        g>>x;
        v.pb(x);
        s=org;
    }

    for(int i=0;i<v.size();i++)
    {
        if(minm>v[i])
            minm=v[i];
    }
cout<<minm<<endl;
   }
return 0;

}
