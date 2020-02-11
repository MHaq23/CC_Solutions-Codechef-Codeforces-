#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {

   int n,x,y,f1=0,f2=0;

   long mim=0;
   cin>>n>>x>>y;
   vector<int> v;

   for(int i=1;i<=n;i++)
   {    int a;
       cin>>a;v.push_back(a);
   }
      if(n==x && n==y)
      {cout<<*min_element(v.begin(),v.end());return 0;}
   for(int i=x+1;i<=n-y;i++)
   {
       for(int j=i-x;j<i;j++)
       {if(v[j-1]<v[i-1])f1=1;}
       for(int j=i+1;j<=i+y;j++)
       {if(v[j-1]<v[i-1]){f2=1;}}
       if(f1==0 && f2==0)
       {mim=i;break;}

   }
    cout<<mim;



    return 0;

}
