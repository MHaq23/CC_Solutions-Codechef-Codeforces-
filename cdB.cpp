#include <bits/stdc++.h>
#include<vector>
#include<math.h>
#include<string>
using namespace std;


typedef long long ll;

int main() {

int n,x,y;string m;
int ct=0;
cin>>n>>x>>y;
cin>>m;

for(int i=m.length()-1;i>=x+1;i--)
{

       if(m.length()-i-1>=y)
    {
        if(m[i]!=0)ct++;
    }



    if(m.length()-i-1==x+1 ){
    if(m[i]!=1)
        ct++;}
    if(m.length()-i-1==y+1&& m[i]!=1)
    {
       ct++;
    }
}

    cout<<ct;

    return 0;

}



