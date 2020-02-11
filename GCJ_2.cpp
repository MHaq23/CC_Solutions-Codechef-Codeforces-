
#include <bits/stdc++.h>
#include<string>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl "\n"
#define mod 1000000007
typedef long long ll;

int main() {

	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

    int t;
    cin>>t;

    while(t--){ int i=1;
      int n; string l,r="";
      cin>>n;
      getline(cin,l);
      string::iterator si1;
      for(si1 = l.begin() ; si1 < l.end(); si1++){
            if(*si1=='E')
              {
                  r.push_back('S');
              }
            if(*si1=='S')
            {
                r.push_back('E');
            }

      }


    cout<<"Case #"<<i<<": "<<r<<endl;
i++;

    }
    return 0;

}
