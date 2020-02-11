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
    string s,t="";
    cin>>s;

    int trail=0,f=0;

    for(int i=s.length()-1;i>=0;i--)
    {
        if(s[i]=='0'){
            trail++;
        }
        else
            break;
    }

    for(int i=0;i<s.length()-trail;i++)
    {
        t+=s[i];
    }
stringstream g(t);
int x=0;
g>>x;
        int k=(int)(log2(x));
        if((int)pow(2,k)/x==1 && trail>=k)
            {cout<<"Yes"<<endl;continue;}

        if(trail==s.length()-1)
            {cout<<"Yes"<<endl;f=1;}
            if(f==0)
                cout<<"No"<<endl;

   }


return 0;

}
