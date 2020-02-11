#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {

   int t;
   cin>>t;
   vector<int> v;
   while(t--)
   {
       int n,s,t;
       cin>>n>>s>>t;

       if((s+t)%n==0)
       {v.push_back(1);break;}
       else
       {
           if(s>t)
            v.push_back(t+1);
           else
            v.push_back(s+1);
       }


   }

   for(int i=0;i<v.size();i++)
    cout<<v[i]<<"\n";



    return 0;

}
