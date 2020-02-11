#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {

   int tt;
    cin>>tt;
    int cp=tt;vector <string> str;
    while(tt--)
    {
       string s,t,p;
       cin>>s>>t>>p;

       sort(s.begin(),s.end());
         sort(t.begin(),t.end());
           sort(p.begin(),p.end());


           if(t>s)
           {t.erase(s.length()-1);}
           else if(t==s)
            str.push_back("YES");
           else
            str.push_back("NO");

           if(t==p.erase(t.length()-1))
            str.push_back("YES");
            else
                str.push_back("NO");

    }
    for(int i=0;i<str.size();i++)
        cout<<str[i]<<"\n";


    return 0;

}
