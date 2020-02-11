#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {

   int q;cin>>q;
   vector<string> ans;
while(q--){
    long long n,k,m=0,ct=0;
    cin>>n>>k;vector<long long> p1,p2;
    /*for(int i=0;i<k;i++)
        {
            p1.push_back(n/k);

        }

        if(k!=1)
        for(int i=0;i<n/k;i++)
        {
        p2.push_back(k);

        }
        else
            p2.push_back(n);
        if(p1==p2)ans.push_back("NO");
        else
            ans.push_back("YES");**/

            if((n/k)%k==0)ans.push_back("NO");
        else if(k==1)ans.push_back("NO");
        else if(n==k)ans.push_back("YES");
        else
            ans.push_back("YES");



}



    for(int j=0;j<ans.size();j++)
   {
       if(j==ans.size()-1)
       cout<<ans[j];
       else
        cout<<ans[j]<<endl;
   }

return 0;

}
