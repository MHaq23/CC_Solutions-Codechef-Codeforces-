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
  string s;
    cin>>s;
    string res="",ans="";
    map<char,int> m;
    multimap<char,int> mm;
    set<char> st;

    for(int i=0;i<s.length();i++)
    {
        m[s[i]]++;
    }
    map<char,int> ::iterator i;
    for(i=m.begin();i!=m.end();i++)
    {
        if((i->second)&1 )
            res+=i->first;
        else
        {
            for(int j=0;j<s.length();j++)
            {
                if(i->first == s[j])
                {
                    mm.insert({s[j],j});
                }
            }
        }
    }
    multimap<char,int> :: iterator k;
    for(k=mm.begin();k!=mm.end();k++)
    {
        if(abs(k->second - (++k)->second) == 1)
            continue;
        else
            res+=k->first;
    }
for(int i=0;i<res.length();i++)
{
    st.insert(res[i]);
}
set<char> ::iterator it;
for(it=st.begin();it!=st.end();it++)
{
    ans+=*it;
}
    cout<<ans<<endl;

   }
return 0;

}
