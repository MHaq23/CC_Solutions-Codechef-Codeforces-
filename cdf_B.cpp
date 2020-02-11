
#include <bits/stdc++.h>
#include<vector>
#include<math.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl "\n"
#define mod 1000000007
typedef long long ll;

int main() {


int q;
cin>>q;
vector<int> v;int a[q];
for(int i=0;i<q;i++)
{
    cin>>a[i];
    cout<<endl;

}
for(int i=0;i<q;i++)
{
    if(a[i]==1)
        v.push_back(0);
    else
    {
        int c=0;bool f=false;
        while(a[i]>1)
        {
            if(a[i]%2==0){a[i]/=2;c++;}
            else if(a[i]%3==0){a[i]=2*a[i]/3;c++;}
            else if(a[i]%5==0){a[i]=4*a[i]/5;c++;}
            else
            {
                v.push_back(-1);f=true;break;
            }
        }
        if(f==false)
            v.push_back(c);
    }
    }
    for(int i=0;i<q;i++)
        cout<<v[i]<<endl;

return 0;
}



