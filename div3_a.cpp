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
    int n,ans=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
       cin>>a[i];
vector<set<int> > v;
int g=0;
    sort(a,a+n);
    if(n==1)
    {
        cout<<1<<endl;continue;
    }
    set<vector<int> > s;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n && j!=i;j++)
        {
        if(abs(a[i]-a[j])!=1)
            {
               g++;
            }
        }
    }


    cout<<g+1<<endl;

   }
return 0;

}
