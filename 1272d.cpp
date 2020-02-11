#include <bits/stdc++.h>

using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl "\n"
#define mod 1000000007
typedef long long ll;

int main() {



	int n;
	cin>>n;

	vector<int> a,v;

	for(int i=0; i<n; i++)
    {   int x;
        cin>>x;
        a.push_back(x);
            }
v.push_back(a[0]);
    for(int i=1;i<n-1;i++)
    {
        if(a[i-1]<a[i+1] && a[i]>a[i-1] && a[i]>a[i+1])
            continue;
        else
            v.push_back(a[i]);
    }
    v.push_back(a[n-1]);
int ct=0,mx=-1;
for(int i=0;i<n-1;i++)
{
   if(v[i]<v[i+1])
    ct++;
   else
   {
       if(mx<ct)
            mx=ct;
       ct=0;
   }
}
cout<<mx;
return 0;

}
