#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define vi vector<long long>
#include<sstream>

class c{

int m,n;
private:
    void ini(int,int);
    int vol(){return m*n;}

};
void c::ini(int a,int b)
{
    m=a,n=b;
}
signed main()
{
    c ca;
    ca.ini(1,2);
    cout<<ca.vol();
    return 0;

}
