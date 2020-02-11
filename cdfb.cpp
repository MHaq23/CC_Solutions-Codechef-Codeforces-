#include<bits/stdc++.h>
using namespace std ;

#define int long long


signed main(){

int t;
cin>>t;
while(t--)
{
int n;
cin>>n;
string s,s1="",s0="";
cin>>s;
int _front=0,_back=0,max_dist=0;
    for(int i=0;i<n;i++)
    {
        s1+="1",s0+="0";
    }
    if(s==s1)
        {cout<<2*n<<endl;continue;}
    if(s==s0)
        {cout<<n<<endl;continue;}

    for(int i=0;i<n;i++)
    {
       if(s[i]=='1')
        _front=i;
    }
    for(int i=n-1;i>=0;i--)
    {
        if(s[i]=='1')
        _back=i;
    }
    max_dist=max(_front,n-1-_back);

    cout<<2*(max_dist+1)<<endl;
}

return  0 ;
}

