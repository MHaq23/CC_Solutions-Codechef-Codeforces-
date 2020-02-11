#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
#define ll  long long int
#define N 100000


int main()
{
int n;
cin>>n;
ll a[n];
ll s=0,mx;
for(int i=0;i<n;i++)
{
    cin>>a[i];
}
mx=*max_element(a,a+n);
ll b[n],gc;

for(int i=0;i<n;i++)
{s+=abs(mx-a[i]);b[i]=mx-a[i];
}
gc=__gcd(b[0],b[0]);
for(int i=1;i<n;i++)
    gc=__gcd(gc,b[i]);

ll y,z;

    z=gc;
    y=s/z;

    cout<<y<<" "<<z;
	return 0;
}
