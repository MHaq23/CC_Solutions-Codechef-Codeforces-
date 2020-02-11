#include<bits/stdc++.h>
using namespace std ;

#define int long long
#define mod 1000000007

signed main(){

int n;
cin>>n;
int z=0,ns=0;
int a[n][n];
for(int i=0;i<n;i++)
{
   for(int j=0;j<n;j++)
   {
        cin>>a[i][j];
   }
}
int ans[n];
unsigned int p=1,pro;
int pr[n];

for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1; j++)
        {
            if (i < j && i!=j)
             ans[1]=round(sqrt((a[i][j]/a[i][j+1])*a[j][j+1])) ;
        }
    }


ans[0]=round(sqrt((a[0][1]/a[1][n-1])*a[0][n-1]));
for(int i=0;i<n;i++)
    cout<<ans[i]<<" ";



return  0 ;
}

