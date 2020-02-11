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
    int n,m,ans=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
       cin>>a[i];
    cin>>m;
    int b[m];
    for(int i=0;i<m;i++)
        cin>>b[i];

        int ed[2][2]={0,0,0,0};
        for(int i=0;i<n;i++)
        {
            if(a[i]%2==0)
                ed[0][0]++;
            else
                ed[1][0]++;
        }

         for(int i=0;i<m;i++)
        {
            if(b[i]%2==0)
                ed[0][1]++;
            else
                ed[1][1]++;
        }
ans=(ed[0][1]*ed[0][0])+(ed[1][0]*ed[1][1]);

    cout<<ans<<endl;


   }
return 0;

}
