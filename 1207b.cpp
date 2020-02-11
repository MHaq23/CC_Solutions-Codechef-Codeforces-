#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
#include<stdint-gcc.h>
using namespace std;
#define ll  long long int

bool iseq(int *a,int *b,int n,int m)
{
    int f=0;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;i++)
            if(*((a+i*n) + j)!=*((b+i*n) + j))f=1;

            if(f==1)
            return false;
            else
                return true;
}

void op(int *a,int *b,int n,int  m)
{
    for(int i=n;i<2+n;i++)
        for(int j=m;j<2+m;i++)
            *((b+i*n) + j)=1;
}

int main() {

int n,m;
cin>>n>>m;
int a[n][m],b[n][m];int ct=0;
vector<pair<int,int> > ans;

    for(int i=0;i<n;i++)
        for(int j=0;j<m;i++)
            cin>>a[i][j];

if(iseq((int*)a,(int*)b,n,m))
{cout<<0;return 0;}

        for(int i=0;i<n-1;i++)
        for(int j=0;j<m-1;i++)
        {
            if(iseq((int*)a,(int*)b,n,m)==false)
            {op((int*)a,(int*)b,i,j);ct++;}
            else
                break;
        }



if(ct==0)cout<<-1;
else
{
cout<<ct<<endl;
for(int i=0;i<ans.size();i++)
    cout<<ans[i].first<<" "<<ans[i].second<<endl;
}

    return 0;

}

