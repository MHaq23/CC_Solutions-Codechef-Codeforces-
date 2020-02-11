#include <bits/stdc++.h>
#include<vector>
#include<math.h>
using namespace std;

#define IOS ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl "\n"
#define mod 1000000007
typedef long long ll;

int main() {


	int n,c=0,ct=0,occur;
	cin>>n;
	string s;
	cin>>s;

	for(int i=0;i<n;i++)
    {
        if(s[i]=='8'){c++;occur=i;}
        if(i<=((n-11)/2))ct++;
    }

    if(s[0]=='8'&&ct>1&& occur)cout<<"YES";
    else
        cout<<"NO";

    return 0;

}



