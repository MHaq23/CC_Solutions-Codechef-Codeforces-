#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define pb push_back
#define vi vector<long long>
#include<sstream>

signed main() {

   int t;
   cin>>t;

   while(t--)
   {
    int n;
    cin>>n;
    vi a;
    int s=a.size();
    for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;a.pb(x);
        }
    vi ans;
    set<int> fin;
    while(a.size()>1)
    {
        vi temp;
        for(int i=0;i<3;i++)
            temp.pb(a[i]);
        sort(temp.begin(),temp.end());
        vi iterator :: it;
        it=remove(a.begin(),a.end(),temp[1]);
        for(i=a.begin();i!=it;i++)
            fin.insert(*i);

        ans.pb(temp[1]);
        a.size()--;
        temp.clear();
    }
for(int i=0;i<a.size();i++)
    {
        if(find(ans.begin(),ans.end(),a[i])==ans.end())
        cout<<a[i]<<" ";
    }
cout<<endl;

   }


return 0;

}
