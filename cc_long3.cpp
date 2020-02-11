#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;


void add(vector<long> &arr, int N, int lo, int hi, int val)
{
    arr[lo] += val;
    if (hi != N - 1)
       arr[hi + 1] -= val;
}

void updateArray(vector<long> &in, int N)
{
    for (int i = 1; i < N; i++)
        in[i] += in[i - 1];
}

int main() {

   int q;cin>>q;
   vector<string> ans;
while(q--){
    long n;
    cin>>n;vector<long> c,h,in(n,0);
    for(int i=0;i<n;i++)
        { long ci;
            cin>>ci;c.push_back(ci);
        }
    for(int i=0;i<n;i++)
        { long hi;
            cin>>hi;h.push_back(hi);
        }

       /* for(int i=0;i<n;i++)
        if(i-c[i]>=0 && i+c[i]<n)
            add(in,n,i-c[i],i+c[i],1);
        else if(i-c[i]<0 && i+c[i]<n)
            add(in,n,0,i+c[i],1);
        else if(i-c[i]>=0 && i+c[i]>=n)
            add(in,n,i-c[i],n-1,1);
        else
            add(in,n,0,n-1,1);*/

            for(long i=0;i<n;i++)
            {
                add(in,n,max(0L,i-c[i]),min(n-1,i+c[i]),1);

            }


updateArray(in,n);

sort(h.begin(),h.end());
sort(in.begin(),in.end());

if(h==in)ans.push_back("YES");
else
    ans.push_back("NO");



    }





    for(int j=0;j<ans.size();j++)
   {
       if(j==ans.size()-1)
       cout<<ans[j];
       else
        cout<<ans[j]<<endl;
   }

return 0;

}
