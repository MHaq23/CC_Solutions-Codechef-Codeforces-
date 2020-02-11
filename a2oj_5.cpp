
#include <string>
#include<vector>
#include<bits/stdc++.h>
#include<stdint-gcc.h>
using namespace std;
#define ll  long long int

int maxi(vector<int> a,int m,int n)
{

int mx=0;
    while(n--)
    {
        sort(a.begin(),a.end());
    for(vector<int>:: iterator i=a.begin();i!=a.end();i++)
    {
        if(*i>0)
            {mx+=*i;(*i)--;n--;}
            else
                a.erase(i);
    }
    }
    return mx;
}

int mim(vector<int> a,int m,int n)
{

int mn=0;
    while(n--)
    {
        sort(a.rbegin(),a.rend());
    for(vector<int>:: iterator i=a.begin();i!=a.end();++i)
    {
        if(*i>0)
            {mn+=*i;(*i)--;n--;}
            else
                a.erase(i);
    }
    }
    return mn;

}
int main() {

  int n,m;
  cin>>n>>m;
vector<int> a;int mx=0,mi=0;

for(int i=0;i<m;i++)
{
    cin>>a[i];
}

cout<<maxi(a,m,n)<<" "<<mim(a,m,n);

    return 0;

}
