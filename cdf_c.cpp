#include<bits/stdc++.h>
using namespace std ;

#define int long long
#define mod 1000000007

signed main(){

string s;
cin>>s;
int l=s.length();int i=0;

while(l--)
{
    if(i==0 || i==s.length()-1){cout<<"Mike"<<endl;i++;continue;}
    else
    {
        if(min(s.length()-1-i,i)%2==0)
            cout<<"Mike"<<endl;
        else
            cout<<"Ann"<<endl;
        i++;
    }
}
return  0 ;
}

