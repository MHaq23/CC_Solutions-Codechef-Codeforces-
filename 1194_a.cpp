#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {

   int t;
    vector<int> res;
    cin>>t;
    int cp=t;
    while(t--)
    {
        long long n,x;
        cin>>n>>x;
        res.push_back(2*x);
    }
    long long k=0;
while(cp--)
{
    cout<<res[k]<<"\n";
    k++;
}


    return 0;

}
