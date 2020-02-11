#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
#include<stdint-gcc.h>
using namespace std;
#define ll  long long int
#define N 100000


int main()
{

int n,k,ct=0;
string s,ans="1";
cin>>n>>k;cin>>s;
string t="1";

if(k>0)
{

if(s[0]!='1'){ct++;s[0]='1';}
for(int i=1;i<n;i++)
    ans+="0";
for(int i=1;i<n;i++)
{
    if(s[i]!=ans[i] && ct<k){s[i]='0';ct++;}

}

for(int j=t.length();j<n;j++)
{
    t+=s[j];
}
}
else
{
    cout<<s;return 0;
}

if(n==1 && k>0)
{
    cout<<"0";return 0;
}
if(n==1 && k==0)
{
    cout<<s;return 0;
}
//for(int i=1;i<k;i++)
   // t+="0";

   // for(int i=k;i<n;i++)
    //    t+=s[i];

//for(int i=0;i<n;i++)
//    if(s[i]!=t[i])ct++;
//if(ct>k)
    cout<<s;

	return 0;
}
