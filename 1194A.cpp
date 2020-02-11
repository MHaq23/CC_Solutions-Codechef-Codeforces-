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
        int n,x,ct=1;
        cin>>n>>x;
        vector<int> v,vn;
        for(int i=1;i<=n;i++)
            v.push_back(i);

        for (int ir =1; ir <= n; ++ir)
        {
            if(ct%2==0 || ct==n/2)

        {vn.push_back(ir);
        }
        else
            break;
        ct++;
        }
            res.push_back(vn[x-1]);
        vn.clear();v.clear();
    }
    int k=0;
while(cp--)
{
    cout<<res[k]<<"\n";
    k++;
}


    return 0;

}
