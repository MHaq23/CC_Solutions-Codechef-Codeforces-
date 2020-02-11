#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
	int a,b,c;

    int l,s=0;
	cin>>a>>b>>c;
    int m=max(b,c);
	l=max(a,m);


	if(l==a && (l>=(b+c))){s=l+1-(b+c);}
	if(l==b && (l>=(a+c))){s=l+1-(c+a);}
	if(l==c && (l>=(b+a))){s=l+1-(b+a);}

    cout<<s;

    return s;

}
