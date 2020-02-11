#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
#include<stdint-gcc.h>
using namespace std;
#define ll  long long int
#define N 100000


int main()
{

int n=4,ans=0,x=0,f=0;
int a[n];
for(int i=0;i<n;i++)
{cin>>a[i];x+=a[i];}

if(x%2==0)
{

// 1 and 3
for(int i=0;i<n;i++)
    if(a[i]==(x/2) && abs(x-a[i])==(x/2))f=1;
    if(f==1){cout<<"YES";return 0;}
    else
// 2 and 2
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n && j!=i;j++)
            if(a[i]+a[j]==(x/2) && abs(x-(a[i]+a[j])==(x/2))){f++;break;}
    }
    if(f)cout<<"YES";
    else
        cout<<"NO";
}else
cout<<"NO";

	return 0;
}
