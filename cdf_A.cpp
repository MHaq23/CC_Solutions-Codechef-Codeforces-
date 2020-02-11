#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int a[2];

int good(string x)
{
    a[0]=0;a[1]=0;
    for(int i=0;i<x.size();i++)
        if(x[i]=='1')a[1]++;
    else
        a[0]++;

    if(a[0]-a[1]==0)return 0;
    else
        return 1;
}


int main() {

   int n;string s,S="";
    vector<string> res;
    cin>>n>>s;
    if(good(s)==1)cout<<0<<"\n"<<s;
    for(int i=0;i<s.size();i++)
    {
        S=S+s[i];
        if(good(S)==1){cout<<<<"\n"<<S<<" "<<s.substr(i+1);break;}
    }

    return 0;

}
