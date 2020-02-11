#include <iostream>
#include <string>
#include<vector>
#include<bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	int N;
	cin>>N;int cpy=N;

    set<char> sm;
    set<char> sw;int f=0;
    while(N--)
    {
        string M,W;
        cin>>M;
        cin>>W;

         set <int> :: iterator itr1;
         set <int> :: iterator itr2;


        if(M.length()>W.length())
        {
            for(int i=0;i<M.length();i++)
                sm.insert(M[i]);
            for(int j=0;j<W.length();j++)
                sw.insert(W[j]);
            for(itr1=sw.begin(),itr2=sm.begin();itr1!=sw.end();++itr1,++itr2)
            {
                if(*itr1==*itr2)f=0;
                else
                    f=1;
            }
        }

         if(M.length()<W.length())
        {
            for(int i=0;i<M.length();i++)
                sm.insert(M[i]);
            for(int j=0;j<W.length();j++)
                sw.insert(W[j]);
            for(int k=0;k<M.length();k++)
            {
                if(sw.find(W[k])==sm.find(M[k]))f=0;
                else
                    f=1;
            }
        }

        if(f==1)
            cout<<"NO";
        else
            cout<<"YES";
    }

	return 0;
}
