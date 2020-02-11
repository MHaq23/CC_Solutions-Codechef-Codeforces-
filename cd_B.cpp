#include <bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define int long long

const int N = 1e5 + 5;

int32_t main()
{
	IOS;
	int t;
	cin >> t;
	while(t--)
	{
		string n,ans="",ans1="";
		cin >> n;
        for(int i=n.length()-1;i>=0;i--)
        {
            ans+=n[i];
        }
        for(int i=0;i<n.length();i++)
        {
            if(ans[i]=='0')
                continue;
            else
                ans1+=ans[i];
        }

		cout << ans1 << endl;
	}
	return 0;
}
