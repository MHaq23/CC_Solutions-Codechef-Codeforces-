#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {

   int n,l,r;
   cin>>n>>l>>r;
   long smax=0,smin=0;
   int c=0,i=0;
   if(l==r)
   {    c=1;smin=n-l+1;int cr=r;
       while(r>1)
       {
       smin+=pow(2,c);c++;
       r--;
       }

       while(i<=cr)
       {
           smax+=pow(2,i);i++;
       }
       while(i<n-1)
       {
           smax+=pow(2,r-1);
           i++;
       }

   }
   else
   {
       smin=n-l+1;i=n-l+1;c=1;int cpr=r;
       while(i<n)
       {
           smin+=pow(2,c);c++;i++;
       }
       int ct=0;
       while(r>0)
       {
           smax+=pow(2,ct);ct++;
           r--;
       }
       int j=cpr;
       while(j<n)
       {
           smax+=pow(2,cpr-1);
           j++;
       }
   }

   /*if(l!=1 && l!=r)
   {
       smin=n-l+1;

   for(int i=n-l;i<n;i++)
   {
    smin+=pow(2,c);c++;
   }
   }
if(l!=r)
for(int i=0;i<n;i++)
   {
       smax+=pow(2,i);
   }
   */

   cout<<smin<<" "<<smax;





    return 0;

}
