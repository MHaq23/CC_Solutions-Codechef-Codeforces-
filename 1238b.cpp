#include<bits/stdc++.h>
using namespace std ;

#define int long long
const int n=100000;
signed main(){

int q;
cin>>q;
while(q--)
{
 int n,r,ans=0;
 cin>>n>>r;
 int a[n],b[n],an[n];
 set<int> s;
 for(int i=0;i<n;i++)
 {
     cin>>a[i];s.insert(a[i]);
 }

set<int> ::iterator it=s.begin();
for(int i=0;i<s.size();i++)
 {
     an[i]=*it;
     it++;
 }
int c=1;
    for(int i=0;i<s.size()-c;i++)
    {
        an[i]=an[i]-r;
        if(an[i]>0)
            ans++;
    }
 cout<<ans<<endl;
}

return  0 ;
}

