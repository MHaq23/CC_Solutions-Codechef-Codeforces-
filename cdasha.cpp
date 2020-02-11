#include<bits/stdc++.h>
using namespace std ;

#define int long long


signed main(){

string s,rev="";
cin>>s;
int dp[s.length()]={0};

for(int i=s.length()-1;i>=0;i--)
    rev+=s[i];

    if(s[0]==rev[0])
        dp[0]=1;
for(int i=1;i<s.length()-1;i++)
{
    if(s[i]==rev[i])
        dp[i]=1+dp[i-1];
        else
            dp[i]=max(dp[i],dp[i-1]);

}

for(int i=0;i<s.length()-1;i++)
{
    cout<<dp[i]<<" ";
}

return  0 ;
}

