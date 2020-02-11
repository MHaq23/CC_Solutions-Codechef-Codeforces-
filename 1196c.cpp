#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {

   long q;
   cin>>q;
   vector<long long> v;

   while(q--)
   {
       long long a,b,c,ans;
       cin>>a>>b>>c;
        ans=ceil((a+b+c)/2);v.push_back(ans);

   }

    for(long long i=0;i<v.size();i++)
    {
        cout<<v[i]<<"\n";
    }

    return 0;

}
