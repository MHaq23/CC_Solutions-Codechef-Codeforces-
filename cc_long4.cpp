#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;



int main() {

   int q;cin>>q;
   vector<string> ans;
while(q--){
    int n;
    cin>>n;vector<int> a(n + 5);
    for(int i=1;i<=n;i++)
        {
            cin>>a[i];
        }


    int xo[n] = {0};
    for(int i = 1; i <= n; i++) {

        xo[i] = xo[i - 1] ^ a[i];
    }
    map<int, vector<int> > m;
    for(int i = 0; i <= n; i++) {
        m[xo[i]].push_back(i);
    }
    int ans = 0;
    for(auto it : m) {
        for(int i = 0; i < it.second.size(); i++) {
            ans += it.second[i];
        }
    }



    }



return 0;

}
