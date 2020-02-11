#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {

   int n,k;
   cin>>n>>k;
   int a[n];int s=0;
   for(int i=0;i<n;i++)
   {
       cin>>a[i];
   }int x=n-1,y=n-1;
    if(k==1)cout<<a[n-1]-a[0];
    else if(k==n)cout<<0;
    else
       {

       while(k--)
        {


        }

   cout<<s;
       }




    return 0;

}
