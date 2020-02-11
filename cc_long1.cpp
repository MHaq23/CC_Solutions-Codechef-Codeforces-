#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {

   int q;cin>>q;
   vector<int> maxm;
while(q--){
    int n;
    cin>>n;
    vector<int> a,b,m;
   for(int i=0;i<n;i++)
   {    int ai;
       cin>>ai;a.push_back(ai);
   }
   for(int i=0;i<n;i++)
   {    int bi;
       cin>>bi;b.push_back(bi);
   }

   for(int i=0;i<n;i++)
   {
       if((a[i]*20-b[i]*10) < 0)
        m.push_back(0);
       else
       {
           m.push_back(a[i]*20-b[i]*10);
       }

   }
   sort(m.begin(),m.end());
   maxm.push_back(m[m.size()-1]);


}

    for(int i=0;i<maxm.size();i++)
   {
       cout<<maxm[i]<<"\n";
   }



    return 0;

}
