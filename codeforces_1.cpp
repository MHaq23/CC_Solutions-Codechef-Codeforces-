#include <bits/stdc++.h>

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

	int n;string s;cin>>n;

	for(int i=1;i<=n;i++ ){
        cin>>s;

        sort(s.begin(),s.end());
        for(int j=0;j<s.size()-2;j++){
            int d=(int)s[j]-(int)s[j+1];
            if(d!=-1)cout<<"No"<<endl;
           if(d==-1)
                cout<<"Yes"<<endl;
        }
	}

}



