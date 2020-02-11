#include<bits/stdc++.h>
using namespace std;
string s1;
int main(){
    char a, d = '!', b = '?', c = '.';int ct=0;
	while(cin >> a){
	    if(!((a == b && b == c)|| (a == b && c == d))){
    		s1 += a;
    	    d = c;
    	    c = b;
    	    b = a;

    	}
	}
	cout << s1;
	return 0;
}

