#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {

   int tp;
   cin>>tp;
   vector<int> v;
   while(tp--)
   {
       int n;
       cin>>n;vector<int> ct(n,1);
       for(int i=0;i<n;i++)
       {
           int m;cin>>m;
           v.push_back(m);

       }
       for(int i=0;i<n;i++)
       {
           for(int j=i+1;j<n;j++)
           {
               if(v[j-1]*v[j]<0)ct[i]++;
               else
                break;
           }
       }


   for(int i=0;i<ct.size();i++)
    cout<<ct[i]<<" ";
    cout<<"\n";
   }


    return 0;

}
