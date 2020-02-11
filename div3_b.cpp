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
        int n;
        cin>>n;
        int p[n+1];
        for(int i=1;i<=n;i++)
            cin>>p[i];

        for(int i=1;i<=n;i++)
        {
            int cnt=0;
            while(p[i]!=i)
            {
                p[p[i]]=p[p[p[i]]];
                cnt++;
            }
            cout<<cnt<<" ";
        }
        cout<<endl;

   }
return 0;

}
