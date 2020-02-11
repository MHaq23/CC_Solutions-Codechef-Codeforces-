
#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


int gcd(int a, int b)
{
    if (b == 0)
        return a;
    return gcd(b, a % b);

}

int main() {


    long n,j;
    cin>>n;
    long a[n];
    for(int i=0;i<n;i++)
        {   cin>>a[i];

        }
long res=a[0];long c=0;
    for(long i=1;i<n;i++)
        {
            res=gcd(a[i],res);

        }
for(j=1;j*j<=res;j++)
{
    if(res%j==0)
        {c+=2;if(j*j==res)c--;}
}

cout<<c;

return 0;

}
