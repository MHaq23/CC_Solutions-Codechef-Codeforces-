#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {

   int tp;
   cin>>tp;
   vector<string> v;
   while(tp--)
   {
       string s;
       cin>>s;
       int flag=0,f2=0;vector<int> pos(s.length(),0);
       for(int i=0;i<s.length();i++)
       {
           if(s[i]=='1')
            {
                pos.push_back(i);
            }
       }
        for(int j=0;j<pos.size()-1;j++)
            if(pos[j+1]-pos[j]>1)
            flag=1;

        for(int j=0;j<pos.size();j++)
            if(pos[j]==1)f2=1;


            if(flag==1 && f2==0)v.push_back("NO");
            else
                v.push_back("YES");


   }
   for(int j=0;j<v.size();j++)
    cout<<v[j]<<"\n";


    return 0;

}
