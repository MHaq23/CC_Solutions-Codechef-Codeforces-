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
       int n;vector<int> diff,p,a,b;
       cin>>n;
        for(int i=0;i<n;i++)
            {int a_el;cin>>a_el;a.push_back(a_el);}
        for(int i=0;i<n;i++)
            {int b_el;cin>>b_el;b.push_back(b_el);}
        for(int i=0;i<n-1;i++)
            if(b[i+1]-b[i]>=0)diff[i]=b[i];
        diff[diff.size()]=b[diff.size()];
        for(int i=0;i<n;i++)
            {   if(find(a.begin(),a.end(),diff[i])!=a.end())
                p.push_back(*find(a.begin(),a.end(),diff[i]));
            }
        if(p.size()!=diff.size())v.push_back("NO");
        else
        {
            sort(p.begin(),p.end());
            if(p==diff)
                v.push_back("YES");
            else
                v.push_back("NO");
        }



   }

   for(int i=0;i<v.size();i++)
    cout<<v[i]<<"\n";



    return 0;

}
