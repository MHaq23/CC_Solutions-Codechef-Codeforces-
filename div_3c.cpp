#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
#include<stdint-gcc.h>
using namespace std;
#define ll  long long int
#define N 100000


int main()
{

int r[3][4];

for(int i=0;i<3;i++)
    for(int j=0;j<4;j++)
        cin>>r[i][j];


        if(r[0][0]>=r[1][0] && r[0][0]>=r[2][0] && r[0][1]<=r[1][2] && r[0][1]<=r[2][2] && r[0][1]>=r[1][1] && r[0][3]<=r[1][3] )
            cout<<"YES"<<endl;
        else
            cout<<"NO";




	return 0;
}
