#include<bits/stdc++.h>
using namespace std ;

#define int long long


signed main(){

int q;
cin>>q;

while(q--)
{
    string s,t;
    cin>>s;
    cin>>t;
    int f=0;
    string temp;
    for(int i=0;i<s.length();i++)
    {
        for(int j=0;j<t.length();j++)
        {
            if(s[i]==t[j]){f=1;break;}
        }
    }
    if(f)
        cout<<"YES"<<endl;
    else
        cout<<"NO"<<endl;
}
return  0 ;
}


